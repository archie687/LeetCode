class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sm = 0;
        // int mn = 0 , mx = 0;
        for(int i=0;i<nums.size();i++){
            int mn = nums[i];
            int mx = nums[i];
            for(int j=i;j<nums.size();j++){
                 mn = min(mn , nums[j]);
                 mx = max(mx , nums[j]);
                 sm += (mx-mn);
            } 

            // sm += (mx-mn);
        }
        return sm;
    }
};