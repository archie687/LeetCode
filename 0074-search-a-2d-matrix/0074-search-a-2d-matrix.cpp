class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0 , right = m*n-1;

        while(left <= right){
            int mid = (left+right)/2;
            int mid_val = matrix[mid/n][mid%n];

            if(mid_val == target) return true;
            if(mid_val < target){
                left = mid+1;
            } 

            else if(mid_val > target){
                right = mid-1;
            }
        }
        return false;      
    }
};