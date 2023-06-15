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
    int maxLevelSum(TreeNode* root) {
        int level = 0;
        int mx_sum = INT_MIN;
        int ans = 0;
        queue<TreeNode*>q;

        q.push(root);

        while(!q.empty()){
            level++;

            int size = q.size();
            int temp = 0;

            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();

                temp += node->val;
                if(node->left){
                    q.push(node->left);
                } 
                if(node->right){
                    q.push(node->right);
                }


            }

            if(temp > mx_sum){
                mx_sum = temp;
                ans = level;
            }
        }

        return ans;
    }
};