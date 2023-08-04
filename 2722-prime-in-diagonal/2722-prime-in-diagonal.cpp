class Solution {
public:

    bool check(int x){
        if(x == 1) return false;

        for(int i=2;i*i<=x;i++){
            if(x%i == 0) return false;
        } 
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int mx = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(check(nums[i][i]) && mx < nums[i][i]){
                mx = nums[i][i];
            } 

            if(check(nums[i][n-i-1]) && mx < nums[i][n-i-1]){
                mx = nums[i][n-i-1];
            } 
        } 
        return mx;
    }
};