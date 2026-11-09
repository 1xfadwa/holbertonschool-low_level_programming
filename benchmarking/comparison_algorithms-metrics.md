# Comparison of Algorithms: Naive vs Single-pass

## Environment
- Machine: Intel(R) Xeon(R) Platinum 8259CL CPU @ 2.50GHz (likely a cloud virtual machine)
- Compiler flags: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`
- Timing method: `clock()` (CPU time), array size 50000
- All runs executed on the same machine, no source modification.

## Raw measurements (5 runs)

| Run | Naive (s) | Single-pass (s) |
|-----|-----------|-----------------|
| 1   | 2.744106  | 0.000106        |
| 2   | 2.743394  | 0.000106        |
| 3   | 2.747922  | 0.000106        |
| 4   | 2.747061  | 0.000106        |
| 5   | 2.744320  | 0.000107        |

## Averages
- Naive algorithm: **2.745361 s**
- Single-pass algorithm: **0.000106 s**

## Relative difference
The naive implementation is ~25,850 times slower than the single-pass implementation.

## Observations
- Naive is O(n^2): about 1.25 billion iterations for n = 50000. Single-pass is O(n): 50000 iterations.
- Naive times varied by about 0.005 s across runs (about 0.2%), so the measurements are stable.
- The single-pass time (~0.1 ms) is close to the resolution of the measurement (1 microsecond), so the ratio is approximate. A 1 microsecond difference changes it by about 1%.
- The two functions return different results (625025000 vs 25000) because the naive version recounts the same elements in every outer iteration. They do not compute the same value, but the comparison measures the cost of each approach.

## Efficiency and energy
The naive version keeps the CPU busy about four orders of magnitude longer. Longer CPU activity generally means higher energy consumption at scale. This project does not measure power in watts: runtime is only an indirect proxy for energy.
