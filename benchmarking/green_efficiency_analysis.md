# Green Efficiency Analysis

## Measurement Methodology

All programs were compiled with gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long, with no optimization flags added, and executed on the same machine in the same session. Time was measured with clock() from time.h: two readings were taken, their difference was computed, and the result was divided by CLOCKS_PER_SEC. The baseline loop was run 3 times, the algorithm comparison 5 times, and the instrumentation lab 5 times, and averages were used instead of single readings.

In the instrumentation lab I took four clock() readings: at the start, after build, after process, and after reduce. Each phase ends exactly where the next one begins, so there are no gaps or overlaps and TOTAL equals the sum of the three phases. The final printf calls and the checksum check were kept outside the timed region because they are not part of the computation. Algorithm logic, input data, and timing logic of the provided programs were not changed.

## Observed Performance Differences

The baseline loop of 100000000 iterations took between 0.095361 and 0.099570 seconds across three runs, with an average of 0.097647 seconds. The spread between the fastest and slowest run was 4.3 percent of the average, which shows that identical deterministic work still produces slightly different timings.

In the comparison program, the naive implementation averaged 2.208877 seconds, while the single-pass implementation averaged 0.000117 seconds. The naive implementation was therefore about 18879 times slower. This matches the code: the naive version checks n(n+1)/2 elements, about 1.25 billion checks for n = 50000, while the single-pass version checks each of the 50000 elements once, which is O(n^2) versus O(n).

In the instrumentation lab, the average TOTAL was 0.000374 seconds, split into BUILD_DATA 0.000158, PROCESS 0.000141, and REDUCE 0.000075 seconds. The largest phase was BUILD_DATA.

## Relation Between Runtime and Energy Consumption

Real power draw was not measured, so runtime is used only as a proxy. A processor that is busy for longer is generally active for longer, so the naive implementation, which kept the CPU busy for 2.208877 seconds compared with 0.000117 seconds for the same array size, is expected to use more energy. This is a reasoned expectation based on runtime, not a measured energy value.

## Limitations of the Experiment

First, clock() measures processor time with limited resolution. The single-pass and instrumentation phases last only microseconds, so values such as 0.000117 seconds are close to the resolution of the clock and are less reliable than the multi-second naive measurements.

Second, the number of runs is small, and the baseline spread of 4.3 percent shows that background activity affects results. All measurements come from one machine, so they cannot be generalized to other hardware.

Third, the two comparison functions return different values (625025000 for the naive version and 25000 for the single-pass version) because the naive version recounts earlier elements on every iteration. The comparison therefore measures the cost of different amounts of work, not two identical outputs.

Fourth, no optimization flags were used, so results describe unoptimized code.

## Practical Engineering Takeaway

Algorithm choice mattered far more than run-to-run noise: the difference of about 18879 times between the two implementations is much larger than the 4.3 percent variation seen in the baseline. Developers should measure before optimizing, instrument each phase to find where time is spent (here BUILD_DATA was the largest phase), repeat runs under the same conditions, and report averages. Runtime is a useful first indicator of efficiency, but real energy conclusions require dedicated measurement tools.
