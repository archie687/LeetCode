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
    int getMinimumDifference(TreeNode* root) {
        
        int min = INT_MAX;
        vector <int> vec;
        dfs(root,vec);
        
        for(int i=0;i<vec.size()-1;i++)
        {
            int temp = abs(vec[i] - vec[i+1]);
            
            if(temp<min)
            {
                min = temp;
            } 
        } 
        
        return min;
    } 
    
    void dfs(TreeNode* root,vector<int> &v)
    {
        if(!root)
            return;
        
        dfs(root->left,v);
        v.push_back(root->val);
        dfs(root->right,v);
    }
};