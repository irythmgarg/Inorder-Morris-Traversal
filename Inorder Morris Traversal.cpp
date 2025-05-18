/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

/*
 * 🌳 Morris Inorder Traversal
 * This function returns the inorder traversal of a binary tree
 * using Morris Traversal — a space-efficient, stackless, and recursion-free approach.
 * It temporarily modifies the tree to establish a return path and restores it later.
 */

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* temp = nullptr;

        while (root) {
            if (root->left) {
                // 🔍 Find the rightmost node in the left subtree (inorder predecessor)
                temp = root->left;
                while (temp->right && temp->right != root)
                    temp = temp->right;

                if (temp->right == root) {
                    // 🧹 Restore original structure by removing the temporary thread
                    temp->right = nullptr;
                    // ✅ Visit the current node
                    ans.push_back(root->val);
                    root = root->right;
                } else {
                    // 🔗 Create a temporary thread to return to the current node later
                    temp->right = root;
                    root = root->left;
                }
            } else {
                // ✅ No left child: visit node and go right
                ans.push_back(root->val);
                root = root->right;
            }
        }

        return ans;
    }
};
