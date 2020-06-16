# 8bit-PMOD-logic-output
Based on Instant SoC, this repo can display any letter through PMOD interfaces. You will need an at least 8 channel logic analyzer to capture it. Testbench: Nexs4DDR

A CICIEC RISC-V#2 solution.

Note: To make sure you can understant these, please see Instant SoC intro first. Link:https://www.fpga-cores.com/instant-soc/

File folder explained:

repo1: Display "lzc ytt 99" through PMOD interface JA (on N4DDR board), the 8 PMOD output (PMOD has 12 pins, but 2 of them are VCC, 2 of them are GND) respetively corresponds the digital output channel 0-7. After you write the generated bitsream, it will continously outputs those letters.

repo2: Added some new features: Switch 1-15 correponds LED 1-15. If the sw turns on, the LED will be on. Note:Sw0 DOES NOT relates LED0. Sw0 is the PMOD output controller. PMOD will output its signals only if sw0 is on. This repo displays "RISC-V" letter, in order to show respect to RISC-V spirit, as well as the patience of Instant SoC developers.
