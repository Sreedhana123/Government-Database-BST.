# Performance Comparison

| Search key | BST comparisons | Linear-search comparisons | Observation |
|---|---:|---:|---|
| A102 | 1 | 1 | Both find root/first item immediately |
| A120 | 2 | 6 | BST requires fewer comparisons |
| A45 | 3 | 8 | BST requires fewer comparisons |
| B3 | 4 | 7 | BST requires fewer comparisons |
| A7 | 3 | 3 | Same number in this case |

For the five selected searches:
- Total BST comparisons = 13
- Total Linear Search comparisons = 25
- Average BST comparisons = 2.6
- Average Linear Search comparisons = 5.0

Thus, for these selected keys and this particular tree, BST search used fewer comparisons overall. The result depends on the tree shape and insertion order.
