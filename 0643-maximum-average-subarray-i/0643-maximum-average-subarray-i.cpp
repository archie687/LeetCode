class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double mx = INT_MIN;
        double sum = 0;
        int i = 0 , j = 0;

        while(j<nums.size()){

            sum += nums[j];

            if(j-i+1 < k){
                j++;
            } 

            else if(j-i+1 == k){
                mx = max(mx , sum/k);
                sum -= nums[i];
                i++;
                j++;
            }
        }
        return mx;
    }
};