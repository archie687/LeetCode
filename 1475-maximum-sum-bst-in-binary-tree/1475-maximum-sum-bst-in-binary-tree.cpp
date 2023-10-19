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
class info{
    public:
    int maxi;
    int mini;
    bool isbst;
    int sm;
};

info solve(TreeNode* root , int &ans){
    if(root == NULL) {return {INT_MIN , INT_MAX , true , 0};}

    if(root->left == nullptr && root->right == nullptr) {
        ans = max(ans , root->val);
        return{root->val , root->val , true ,root->val};
        
     }

    info left = solve(root->left , ans);
    info right = solve(root->right , ans);

    info currNode;
    currNode.maxi = max(root->val , right.maxi);
    currNode.mini = min(root->val , left.mini);
    currNode.sm = root->val + right.sm + left.sm;

    if(left.isbst && right.isbst && (root->val > left.maxi && root->val < right.mini)){
        currNode.isbst = true;
    } 
    else{
        currNode.isbst = false;
    }

    if(currNode.isbst){
        ans = max(ans , currNode.sm);
    } 
    return currNode;
}
public:
    int maxSumBST(TreeNode* root) {
        int ans = 0;
        solve(root , ans);
        return ans;
    }
};