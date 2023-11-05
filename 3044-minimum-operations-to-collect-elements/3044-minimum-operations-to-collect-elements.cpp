class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int curr = 0;
        int cnt = 0;
        vector<int>arr(k+1 , 0);
        for(int i=nums.size()-1;i>=0;i--){
            
            if(nums[i] <= k && arr[nums[i]] == 0){
                arr[nums[i]] = 1;
                cnt++;
                
            } 
            curr++;           

            if(cnt == k)break;
        }
        return curr;
    }
};