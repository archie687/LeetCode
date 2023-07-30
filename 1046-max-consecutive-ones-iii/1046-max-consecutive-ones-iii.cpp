class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int cnt = 0;
        int left = 0 , right = 0 , res = INT_MIN;

        while(right < nums.size()){
            if(nums[right] == 0){
                cnt++;
            } 

            while(cnt > k){
                if(nums[left] == 0)
                    cnt--;
                    left++;
                 
            } 
            right++;
            res = max(res , right-left);
        }

        return res;
    }
};