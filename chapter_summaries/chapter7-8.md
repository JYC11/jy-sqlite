# chapter 7-8

Chapter 7 explains the concept of b+ trees and chapter 8 implements the b+ tree in the database.

I understand the code like this:
The abstractions have gone like this:
Table -> Row -> Node(B+Tree) -> Actual Data
The Cursor data structure is for the metadata of the table.

2 types of nodes exist:
internal node -> nodes with children
leaf node -> nodes without children

internal nodes contain keys and pointers to children and are used for routing/traversing across the tree

leaf nodes contain cells(key, value pairs), the body of a leaf node is an array of cells

General flow for initiation and insertion:
An empty B-tree starts with a single node, a leaf node(This is also the root node).
You can add cells (key value pairs with key being indexes or id and value being the actual value) to the single existing node.

Depending on how large the node is set to be, adding more nodes will cause the node to be split into 2 with the node becoming an internal node pointing to leaf nodes with values.

Repeat ad infinitum.

When searching for values(usually with id or index): the index/id is compared with the key in the internal node.
If it is less than or equal to, go down left. If it is larger, go down right.
Repeat until there are no children nodes.
The target value will be in the leaf node you end up at.

To be honest, the code is kinda getting a bit too hard too understand atm. I'm thinking of just pushing on and kinda just following on with the code (without understanding the code fully) but I'll try to understand the concepts. C is hard as FUCK.
