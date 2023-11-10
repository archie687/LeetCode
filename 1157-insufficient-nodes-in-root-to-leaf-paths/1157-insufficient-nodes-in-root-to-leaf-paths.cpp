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
public:
 
    bool dfs(TreeNode* root, int limit , int sm){
        if(!root) return false;

        if(root->left == nullptr && root->right == nullptr){
            if(sm+root->val < limit) return false;
            return true;
        } 

        bool left = dfs(root->left , limit , sm+root->val);
        bool right = dfs(root->right , limit , sm+root->val);

        if(left == false) root->left = nullptr;
        if(right == false) root->right = nullptr;

        if(left || right) return true;
        return false;
    }

    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        if(root == nullptr) return nullptr;

        bool ans = dfs(root , limit , 0);

        if(ans) return root;
        return nullptr;
    }
};