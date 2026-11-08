# Algorithmic Efficiency Comparison

## Run 1
```
Naive algorithm result: 625025000
Naive algorithm time: 2.339570 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000110 seconds
```

## Run 2
```
Naive algorithm result: 625025000
Naive algorithm time: 2.131807 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000119 seconds
```

## Run 3
```
Naive algorithm result: 625025000
Naive algorithm time: 2.142723 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000119 seconds
```

## Run 4
```
Naive algorithm result: 625025000
Naive algorithm time: 2.370620 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000120 seconds
```

## Run 5
```
Naive algorithm result: 625025000
Naive algorithm time: 2.059663 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000119 seconds
```

## Averages

| Implementation | Average time (s) |
|---|---|
| Naive | 2.208877 |
| Single-pass | 0.000117 |

The naive implementation is ~18815 times slower than the single-pass implementation.

## Analysis
The naive version uses nested loops and performs n(n+1)/2 checks, which is O(n^2). The single-pass version checks each element once, which is O(n). Both return a correct even count, but the naive version keeps the CPU active far longer, which uses more energy as measured by runtime.

Note: runtime is a proxy for energy; real power draw was not measured.
