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

# `Binary Search Tree`

### `Introduction`

1. Binary search tree is a data structure that quickly allows us to maintain a sorted list of numbers.
2. Reason to Called the BST :
   - It is called a binary tree because each tree node has a maximum of two children.
   - It is called a search tree because it can be used to search for the presence of a number in `O(log(n))` time.

### `Properties of BST`

1. All nodes of left subtree are less than the root node.
2. All nodes of right subtree are more than the root node.
3. Both subtrees of each node are also BSTs i.e. they have the above two properties.

### `BST Operations`

1. Search Operation :
   - If the value is below the root, we can say for sure that the value is not in the right subtree, we need to only search in the left subtree.
   - If the value is above the root, we can say for sure that the value is not in the left subtree, we need to only search in the right subtree.
2. Insertion Operation :
   - We do insert in such a way what the left child contains the smaller than the parent node while the left child contains the value greater than the parent node.
   - We keep going to either right subtree or left subtree depending on the value and when we reach a point left or right subtree is null, we put the new node there.
3. Deletion Operation :
   - Case I :
     - If the node is the leaf node, then we simply delete that node from the tree, without performing any other operation.
   - Case II (If the node has single child):
     - Replace that node with its child node.
   - Case III (If the node has the two children) :
     - Inorder Predecessor - Taking the left sub tree & and than taking the largest value and replacing it to the root node.
     - Inorder successor - Taking the right sub tree & and than taking the smallest value and replacing it to the root node.

### `Construction of BST Using Traversals`

1. Note : In case of the Binary Search Tree, the Inorder is always in the ascending order.
2. We need the two traversals to continue forming the BST.
3. We make the Inorder traversal from the elements by arranging the elements in the ascending order.

# `AVL`

### `Introduction`

1. AVL tree is a self-balancing binary search tree(BST) in which each node maintains extra information called a balance factor whose value is either -1,0,1.
2. Full form - Andelson-Velsky & Landis.
3. Balance factor of a node in an AVL tree is the difference between the height of the left subtree and the height of the right subtree.
4. The value of the balance factor should be always between the `{-1,0,1}`
5. Complexities of Difference Operations on AVL Tree
   - Insertion - O(logn)
   - Deletion - O(logn)
   - Search - O(logn)

### `Rotation in AVL Tree`

1. Right Rotation :
   - In left-rotation, the arrangement of the nodes on the right is transformed into the arrangements on the left node.
2. Left Rotation :
   - In left-rotation, the arrangement of the nodes on the left is transformed into the arrangements on the right node.
3. Right-Left rotation :
   - In left-right rotation, the arrangements are first shifted to the left and then to the right.
4. Left-Right rotation :
   - In right-left rotation, the arrangements are first shifted to the right and then to the left.

# `B-Tree`

### `Introduction`

1. B-Tree is a special type of self-balancing search tree in which each node can contain more than one key and can have more than two children.
2. The need of B-Tree is we can store the mant keys in a single node and can have multiple child nodes resulting in the decrease of the height and allowing faster accesses.

### `Properties of B-Tree`

1. It is balanced m-way tree where m is the order.
2. It is the generalization of BST in which a node can have more than one key and more than 2 children.
3. It is maintained in the sorted order.
4. All leaf node must be at the same level.
5. Min. and Max. children for every node :
   - Max. Children - `n`
   - Min. Children :
     - Leaf - `0`
     - Root Node - `2`
     - Internal Nodes - `m/2`
6. Min. and Max. keys for every node :
   - Max. Keys : `m-1`
   - Min. keys :
     - Root node - `1`
     - All other nodes - `m/2 - 1`
