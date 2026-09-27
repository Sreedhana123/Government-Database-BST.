# Final Conclusion

The government identification numbers were organized using a Binary Search Tree by comparing the identifiers lexicographically. The inorder traversal produced the identifiers in sorted lexicographic order.

For the five selected searches, the BST required 13 total comparisons, while linear search required 25 comparisons. The BST therefore showed fewer comparisons for this data set. However, a normal BST does not guarantee logarithmic performance because its height depends on the insertion order.

Key length can also affect practical search time because string comparison may require checking several characters. As the database grows, maintaining a balanced tree becomes important. A self-balancing BST such as an AVL tree or Red-Black tree is a suitable approach when consistently efficient search, insertion, and deletion are required.

Therefore, the experiment demonstrates that BST search can be more efficient than linear search for suitable tree structures, while a self-balancing BST is preferable for a large and continuously growing database.
