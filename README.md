# Government Database BST Assignment

## Problem
A government database stores the identification numbers:

`A102, A25, A7, B100, B12, A120, B3, A45`

The assignment implements a BST, performs inorder traversal, compares BST search with linear search, studies insertion order and key length, and analyses complexity.

## Files

- `source_code/bst.c` - BST implementation and search
- `source_code/linear_search.c` - Linear search implementation
- `source_code/combined.c` - Combined experiment
- `input/input.txt` - Given identification numbers
- `output/bst_output.txt` - BST execution output
- `output/linear_output.txt` - Linear search execution output
- `trace_tables/trace_tables.md` - Insertion and search traces
- `analysis/complexity_analysis.md` - Time and space complexity
- `analysis/comparison_table.md` - Performance comparison
- `analysis/final_conclusion.md` - Final conclusion

## BST

The given insertion order is:

A102, A25, A7, B100, B12, A120, B3, A45

Inorder traversal:

`A120 A102 A25 A45 A7 B100 B12 B3`

## Search comparison

For the selected keys, BST search requires 13 total comparisons, while linear search requires 25 total comparisons.

## Complexity

BST:
- Best: O(1)
- Average: O(log n)
- Worst: O(n)
- Space: O(n)

Linear Search:
- Best: O(1)
- Average: O(n)
- Worst: O(n)
- Extra space: O(1)

For string identifiers of average length L, practical comparison cost can add a factor of O(L).

## Conclusion

A BST can reduce search comparisons when its structure is reasonably balanced. Since ordinary BST height depends on insertion order, a self-balancing BST such as AVL or Red-Black Tree is more suitable for a large, growing government database when consistently efficient searches are required.

## How to compile

Using GCC:

```bash
gcc source_code/bst.c -o bst
./bst

gcc source_code/linear_search.c -o linear_search
./linear_search

gcc source_code/combined.c -o combined
./combined
```
