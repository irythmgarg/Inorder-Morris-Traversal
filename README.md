# Inorder-Morris-Traversal

# 🌿 Morris Inorder Traversal — Binary Tree 🧠🌳

Welcome to this magical repository where recursion and stacks take a vacation! 🏖️  
Here, we explore **Morris Inorder Traversal**, an elegant algorithm to traverse a binary tree **inorder** using **O(1) space**!

---

## 📜 Problem Statement

> Given a binary tree, return its inorder traversal without using recursion or a stack.

---

## 🚀 What is Morris Traversal?

Morris Traversal is a **space-optimized** tree traversal technique.  
It uses temporary threads (right pointers) to keep track of where to return after exploring left subtrees.

💡 **Key Features**:
- ✅ No recursion
- ✅ No stack
- ✅ O(n) time
- ✅ O(1) space (excluding output)
- 🌱 Tree is restored to its original structure after traversal

---

## 🛠️ How It Works

1. For every node:
   - If it has a left child:
     - Find its **inorder predecessor** (rightmost node in the left subtree).
     - If predecessor's `right` is `NULL`:
       - Thread it to the current node and go left.
     - If predecessor's `right` already points to the current node:
       - Remove the thread, **visit the node**, and go right.
   - If it has no left child:
     - **Visit the node** and go right.

2. This continues until all nodes are visited.

---

## 🔍 Example
```cpp

1
 \
  2
 /
3
🧭 Inorder: [1, 3, 2]

```

---

## 📊 Time & Space Complexity

| Complexity | Value |
|------------|-------|
| Time       | O(n)  |
| Space      | O(1)  |

*Tree is visited in linear time with constant auxiliary space!*

---

## 🧑‍💻 Author

Ridham Garg

Thapar Institute of Engineering and Technology

---

## 📎 Related Topics

- Binary Tree
- Tree Traversal
- Inorder Traversal
- Space Optimization
- Interview Questions

---

🌟 *Star this repo if you learned something cool!* 🌟
