# AXI4-Lite 断言验证实验代码

课题《AXI 总线协议的系统化验证方法》的配套验证环境，基于服务器上已有的
Verilator 5.054（`~/chisel-env/bin/verilator`）。

## 目录结构

- `rtl/axi4lite_slave.sv` — 基线设计：4×32 位寄存器的 AXI4-Lite 从设备（无错误）
- `sva/axi4lite_checker.sv` — 协议检查器：17 条断言/看门狗 + 前件触发统计 + 首次失败时刻记录
- `tb/tb_top.sv` — 随机背压 testbench（主设备 BFM、记分板、全局超时、波形转储）
- `mutants/` — 缺陷注入版本，每个文件头注明违反的协议条款与预期命中的断言

## 运行

```sh
make run-baseline   # 基线：期望 RESULT: PASS，且各前件计数 > 0（排除空洞通过）
make all            # 基线 + 全部 5 个缺陷版本
make summary        # 汇总各版本的断言触发情况
```

每个目标的完整日志在 `build/<目标>/run.log`，波形在 `build/<目标>/wave.vcd`
（可用 GTKWave 查看；FST 需要的 lz4 库本机缺失，故用 VCD）。

## 断言编号与协议条款对应

| 编号 | 性质 | 协议条款 (ARM IHI 0022) |
|---|---|---|
| A1a/A1b, A2a/A2b, A3a/A3b | AW/W/AR 通道 VALID 与载荷稳定性 | A3.2.1/A3.2.2 |
| A4a/A4b/A4c | R 通道 VALID、RDATA、RRESP 稳定性 | A3.2.1/A3.2.2 |
| A5a/A5b | B 通道 VALID 与 BRESP 稳定性 | A3.2.1/A3.2.2 |
| A6 | BVALID 之前必须有完整写事务 | A3.3.1 |
| A7 | RVALID 之前必须有被接受的读地址 | A3.4.1 |
| A8/A9 | 本设计只返回 OKAY | 设计规格 |
| L1/L2 | 已接受事务必须在有界周期内得到响应 | 活性/死锁自由 |

## 缺陷注入清单

| 版本 | 注入错误 | 预期检出 |
|---|---|---|
| m1_rvalid_drop | RVALID 未等到握手就撤销 | A4a |
| m2_rdata_unstable | 停顿期间 RDATA 变化 | A4b（+记分板） |
| m3_spurious_bvalid | W 握手前给出 BVALID | A6 |
| m4_missing_bvalid | 写事务永远无响应 | L1（+全局超时） |
| m5_bad_rresp | 读响应误为 SLVERR | A9 |
