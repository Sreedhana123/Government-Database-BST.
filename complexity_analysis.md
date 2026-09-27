# Complexity Analysis

## BST Search

- Best case: O(1), when the required key is at the root.
- Average case: O(log n), when the BST is reasonably balanced.
- Worst case: O(n), when the BST becomes skewed.
- Space: O(n) for storing n nodes.

## Linear Search

- Best case: O(1), when the key is the first element.
- Average case: O(n).
- Worst case: O(n), when the key is last or absent.
- Extra search space: O(1).

## Effect of Key Length

The identification numbers are strings. A comparison using `strcmp()` may examine multiple characters. If the average key length is L, the practical cost of one string comparison can be up to O(L). Therefore, a balanced BST search can have practical cost approximately O(L log n), while linear search can be approximately O(Ln).

## Effect of Insertion Order

The given insertion order produces a non-perfect but usable BST. Insertion order can strongly affect height. A balanced insertion order gives a height close to log2(n), whereas an order that repeatedly inserts keys on one side can create a skewed tree with height O(n).

For 8 nodes:
- Best/near-balanced height is about log2(8) = 3 edges.
- A completely skewed tree can have 7 edges.
