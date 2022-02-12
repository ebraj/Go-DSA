# `Terminologies`

### `Tree`

1. A tree is a nonlinear hierarchial data structure that consists of nodes connected by edges.

### `Node`

1. A node is an entity which contains the key or value and pointers to its child nodes.

### `Root Node`

1. The topmost node of a tree which doesnot have any parent node is root node.

### `Parent Node`

1. The node which is a predecessor of a node is called the parent node of that node.

### `Child Node`

1. The node which is the immediate successor of a node is called the child node of that node.

### `Leaf Node (External Node)`

1. The nodes which do not have any child nodes are called leaf nodes.

### `Internal Node`

1. A node with at least one child is called Internal Node.

### `Edge`

1. It is the link between any of the two nodes.

### `Height of Node`

1. It is the number of edges from the node to the leaf node.(i.e. the longest path).

### `Depth of Node`

1. Depth of a node is the number of edges from the root to the node.

### `Degree of Node`

1. The total number if branches of that node is degree of node.

### `Degree of Tree`

1. The minimum degree of a tree is the longest degree of any node of that tree.

# `Binary Tree & Its types`

### `Binary Tree`

1. It is a data structure in which each parent node can have at most two children.

### `Types of Binary Trees`

1. Full Binary Tree

- A binary tree of height is known as full binary tree if it has the maximum number of nodes.
- Formula : `Max.node = 2^(h+1)-1`

2. Complete Binary Tree

- A Binary Tree is a Complete Binary Tree if all the levels are completely filled except possibly the last level and the last level has all keys as left as possible.
- If a binary tree is represented in an array then there should not be any blank spaces between the elements. In that case, it is called as complete binary tree.

3. Strict Binary Tree

- Every node can have degree 2 or 0. In that case the binary tree is known as stricy binary tree.

# `Representation of Binary Tree`

### `Array Representation`

1. In array representation we use 1D array to represent a binary tree.
2. Reletation is mainted by placing the respective elements in `2*i` (index for left child) and `2*i+1` for right child.

### `Linked List Representation of Binary Tree`

1. We use the double linked list to represent a binary tree.
2. In a double linked list, every node consists of three fields.
3. First field for storing left child address, second for stroing actual data and third for storing right child address.

# `Tree Traversals`

### `Preorder Traversal`

1. First visit root node.
2. Visit all the nodes in the left subtree.
3. Visit all the nodes in the right subtree.

### `Inorder Traversal`

1. First, visit all the nodes in the left subtree.
2. Then the root node.
3. Visit all the nodes in the right subtree.

### `Post Traversal`

1. Visit all the nodes in the left subtree.
2. Visit all the nodes in the right subtree.
3. Visit the root node.
