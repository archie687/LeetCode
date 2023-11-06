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

    pair<int , int> dfs(TreeNode* root , int& cnt){
        if(!root) return{0,0};

        auto [left_sum , left_cnt] = dfs(root->left , cnt);
        auto [right_sum , right_cnt] = dfs(root->right , cnt);

        int curr_sum = root->val + left_sum + right_sum;
        int curr_cnt = 1 + left_cnt + right_cnt;

        if(curr_sum/curr_cnt == root->val) cnt++;
        
        return {curr_sum , curr_cnt};
    }

    int averageOfSubtree(TreeNode* root) {
        int cnt = 0;
        dfs(root , cnt);
        return cnt;
    }
};