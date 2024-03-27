Binary Tree:
A binary tree is a hierarchical data structure where each node can have at most two children: a left child and a right child.
Unlike a linked list, which has a linear structure, a binary tree allows branching.
Binary trees are commonly used for efficient storage, searching, and retrieval of data.
Operations on binary trees include insertion, deletion, and traversal.
Binary Search Tree (BST):
A Binary Search Tree (BST) is a specific type of binary tree with the following properties:
The left child of a node has a value less than or equal to the node’s value.
The right child of a node has a value greater than or equal to the node’s value.
BSTs enable efficient searching, insertion, and deletion of elements.
They are commonly used in applications like dictionaries, databases, and symbol tables.
Time Complexity Gain Compared to Linked Lists:
Searching in a balanced BST has a time complexity of O(log N), where N is the number of nodes.
In contrast, searching in an unsorted linked list has a time complexity of O(N), which is similar to linear search.
BSTs provide significant time savings for search operations.
Depth, Height, and Size of a Binary Tree:
Depth: The depth of a node is the number of edges from the root to that node.
Height: The height of a node is the longest path from that node to a leaf node (i.e., the maximum depth).
Size: The size of a binary tree is the total number of nodes in the tree.
Traversal Methods for Binary Trees:
Inorder Traversal: Visit left subtree, then the root, and finally the right subtree.
Preorder Traversal: Visit the root, then the left subtree, and finally the right subtree.
Postorder Traversal: Visit the left subtree, then the right subtree, and finally the root.
Types of Binary Trees:
Full Binary Tree: Every node has either 0 or 2 children. It is always balanced.
Complete Binary Tree: All levels, except possibly the last, are filled, and nodes are as left as possible.
Perfect Binary Tree: All nodes have exactly two children, and all leaf nodes are at the same level.
Balanced Binary Tree: Heights of left and right subtrees differ by at most one.
