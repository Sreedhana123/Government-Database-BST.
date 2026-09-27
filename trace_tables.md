# Trace Tables

## A. BST Insertion Trace

| Step | Key inserted | Comparison path | Position |
|---|---|---|---|
| 1 | A102 | — | Root |
| 2 | A25 | A25 > A102 | Right of A102 |
| 3 | A7 | A7 > A102, A7 > A25 | Right of A25 |
| 4 | B100 | B100 > A102 | Right of A102; left of B100 |
| 5 | B12 | B12 > A102, B12 < B100 | Left of B100 |
| 6 | A120 | A120 > A102 | Right of A102; A120 < A25, so left of A25 |
| 7 | B3 | B3 > A102, B3 < B100, B3 > B12 | Right of B12 |
| 8 | A45 | A45 > A102, A45 > A25, A45 < A7 | Left of A7 |

## B. BST Search Trace

| Key | Search path | Comparisons |
|---|---|---:|
| A102 | A102 | 1 |
| A120 | A102 → A25 → A120 | 2 |
| A45 | A102 → A25 → A7 → A45 | 3 |
| B3 | A102 → B100 → B12 → B3 | 4 |
| A7 | A102 → A25 → A7 | 3 |

## C. Linear Search Trace

| Key | Items checked | Comparisons |
|---|---|---:|
| A102 | A102 | 1 |
| A120 | A102, A25, A7, B100, B12, A120 | 6 |
| A45 | A102, A25, A7, B100, B12, A120, B3, A45 | 8 |
| B3 | A102, A25, A7, B100, B12, A120, B3 | 7 |
| A7 | A102, A25, A7 | 3 |
