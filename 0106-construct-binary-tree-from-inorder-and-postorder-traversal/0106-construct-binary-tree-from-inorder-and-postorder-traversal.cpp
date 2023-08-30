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
    unordered_map<int , int>mp;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        

        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]] = i;
        } 

        return dfs(inorder , 0 , inorder.size()-1 , postorder , 0 , postorder.size()-1);
    } 

    TreeNode* dfs(vector<int>& inorder , int inStart , int inEnd , vector<int>& postorder , int postStart , int postEnd){
        if(postStart > postEnd || inStart > inEnd) return NULL;

        TreeNode* root = new TreeNode(postorder[postEnd]);
        int inRoot = mp[root->val];
        // int inRoot = mp[postorder[postEnd]];
        int left = inRoot - inStart;

        root->left = dfs(inorder , inStart , inRoot-1 , postorder , postStart , postStart+left-1);
        root->right = dfs(inorder , inRoot+1 , inEnd , postorder , postStart+left, postEnd-1);

        return root;
    }
};