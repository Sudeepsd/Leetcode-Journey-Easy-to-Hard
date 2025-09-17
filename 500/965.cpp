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
class Solution {
private:
    bool traversal(TreeNode* root, int val) {
        if (!root) return true;

        if (root->val != val) return false;

        return traversal(root->left, val) // O(n / 2), left subtree
            && traversal(root->right, val); // O(n / 2), right subtree
    }

public:
    bool isUnivalTree(TreeNode* root) {
        if (!root) return true;

        int val = root->val;
        return traversal(root, val); // O(n), visits each node
    }
};

// Time Complexity: O(n), n = numbers of nodes in tree
// Space Complexity: O(h), Recursion stack depth = height of tree

// Alternatively, you can also use iterative method (BFS/DFS) using stack/queue
// and is equally optimal solution to the current one.