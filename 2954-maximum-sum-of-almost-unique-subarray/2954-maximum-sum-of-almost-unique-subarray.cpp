class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        
        unordered_map<long long , long long>mp;
        long long mx = 0;
        long long sum = 0;

        for(int i=0;i<k;i++){
            sum += nums[i];
            mp[nums[i]]++;
        } 

        if(mp.size() >= m) mx = sum;
        int j = 0;
        for(int i=k;i<nums.size();i++){
            sum += nums[i];
            sum -= nums[j];
            mp[nums[i]]++;
            mp[nums[j]]--;

            if(mp[nums[j]] == 0)mp.erase(nums[j]);
            if(mp.size() >= m){
                mx = max(mx , sum);
            } 
            j++;
        } 
        return mx;
    }
};