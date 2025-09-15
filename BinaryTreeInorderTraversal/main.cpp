#include <vector>
#include <iostream>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
        std::vector<int> inorderTraversal(TreeNode* root) {
            std::vector<int> tree;
            inorder(root, tree);
            return (tree);
        }
    private:
        void inorder(TreeNode* node, std::vector<int>& result) {
            if (!node) return;
            inorder(node->left, result);
            result.push_back(node->val);
            inorder(node->right, result);
        }
};

int main(void) {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    Solution sol;
    std::vector<int> result = sol.inorderTraversal(root);
    for (int val : result) {
        std::cout << val;
    }
    return (0);
}