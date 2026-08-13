*This activity has been created as part of the 42 curriculum by mapointi, inhoufan.*

# push_swap

## Description

`push_swap` is a two-stack sorting project. Given a list of integers (no duplicates, all within `INT_MIN`/`INT_MAX` range) passed as arguments, the program computes and prints on standard output the shortest possible sequence of instructions — chosen from a limited set (`sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`) — that sorts the values into ascending order on stack `a`, using stack `b` only as intermediate storage.

The project requires four distinct sorting strategies, each targeting a different complexity class measured in *number of `push_swap` operations generated* (not classical array-based complexity):

- a **simple** algorithm, `O(n²)`
- a **medium** algorithm, `O(n√n)`
- a **complex** algorithm, `O(n log n)`
- an **adaptive** algorithm that picks between the three above based on a `disorder` metric computed on the input, before any move is made

## Instructions

### Compilation

```bash
make        # builds the push_swap executable
make re     # rebuilds everything from scratch
make clean  # removes object files
make fclean # removes object files and the executable
```

Compiled with `cc -Wall -Wextra -Werror`, no relink.

### Usage

```bash
./push_swap [flag] n1 n2 n3 ...
```

If no numbers are given, the program prints nothing and returns immediately. If an argument is not a valid integer, is out of `int` range, or a duplicate appears, the program prints `Error` on stderr and stops.

| Flag | Effect |
|---|---|
| *(none)* | Default: `--adaptive` |
| `--adaptive` | Picks simple / medium / complex automatically based on the computed disorder |
| `--simple` | Forces the `O(n²)` algorithm |
| `--medium` | Forces the `O(n√n)` algorithm |
| `--complex` | Forces the `O(n log n)` algorithm |
| `--bench` | Combinable with any of the above; prints sorting metrics on stderr (see below) alongside the operation list |

Examples:

```bash
./push_swap 2 1 3 6 5 8
./push_swap --simple 5 4 3 2 1
./push_swap --complex 4 67 3 87 23 | ./checker_linux 4 67 3 87 23
./push_swap --bench --adaptive $(shuf -i 0-9999 -n 500) 2> bench.txt
```

### Bench mode

`--bench` prints, on stderr only, after sorting:

```
[bench] disorder: <xx.xx>%
[bench] strategy: <name> / <complexity class>
[bench] total_ops: <n>
[bench] sa: .. sb: .. ss: .. pa: .. pb: ..
[bench] ra: .. rb: .. rr: .. rra: .. rrb: .. rrr: ..
```

The operation list itself keeps going to stdout as usual, so `--bench` can be piped straight into a checker while metrics are redirected to a file.

## Algorithms and justification

Disorder is computed once, before any move, as the ratio of "mistaken" adjacent-order pairs over all possible pairs in stack `a` (0 = already sorted, 1 = worst case). It drives the adaptive selector:

| Regime | Disorder | Strategy | Internal technique | Why |
|---|---|---|---|---|
| Low | `< 0.2` | Simple, `O(n²)` | Repeated `sa`/`ra` scan until no adjacent pair is out of order | A nearly-sorted list has very few inversions to fix; the quadratic worst case of this approach is never actually reached, and the implementation cost stays minimal. |
| Medium | `0.2 ≤ d < 0.5` | Medium, `O(n√n)` | Rank every value (`ft_rang`), split stack `a` into `√n`-sized chunks by rank, push chunks into `b`, then pour them back into `a` in rank order | Splits the problem into `√n` groups of `√n` elements: cheap enough to avoid `O(n²)` blow-up on a moderately shuffled list, without paying for a full radix pass. |
| High | `≥ 0.5` | Complex, `O(n log n)` | Radix sort on the binary representation of each element's rank (`ft_radix`): one pass per bit, `pb`/`ra` to separate 0/1 bits, `pa` to pour back | Deterministic cost of `n × bitsize(n)` operations regardless of how shuffled the input is — the only strategy that stays efficient on fully randomized, large lists. |

Space complexity stays `O(n)` in all cases: the algorithms only ever hold the `n` input values across stacks `a` and `b`, with no auxiliary structure that scales beyond that.

## Resources

### References

> _To complete: list here the documentation / articles / tutorials you actually used (42 subject, sorting algorithm references, push_swap visualizers, etc.)._

-

### AI usage

> _To complete per your campus rules: which AI tool(s), for which tasks (debugging, code review, documentation drafting, etc.), and on which parts of the project. Be specific — this is a mandatory, checked section._

-

## Contributions

> _To confirm/adjust — inferred from the file headers in the codebase:_

- **mapointi**: `push_swap.c` (parsing, validation, `disorder`), `rotate.c`, `rrotate.c`, `pushi.c`, `radix.c`, `adaptative_algo.c`
- **inhoufan**: `flags.c`, `swapi.c`, `simple_algo.c`, `algo_medium.c`, `operations.c`, `utils2.c`

## Project status

Work in progress — open items before submission:

- [ ] Re-enable the `write()` calls for each operation (`pa`, `pb`, `sa`...) — currently commented out, so nothing prints on stdout yet
- [ ] Fix the flag name: code checks `--adaptative`, subject requires `--adaptive`
- [ ] Implement `--bench` (metrics format above)
- [ ] Guard `argv[1]`/`argv[2]` access in `ft_flags` against `argc` (segfault on 1-argument calls)
- [ ] `argc < 2` (no numbers) must exit silently, not print `Error`
- [ ] Chunk size in the medium algorithm should be `√n`, not a fixed 10
- [ ] Performance validation on 100 / 500 random numbers against subject thresholds
- [ ] Norm check