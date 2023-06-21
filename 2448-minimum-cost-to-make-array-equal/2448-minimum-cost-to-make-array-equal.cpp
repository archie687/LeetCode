// class Solution {
// public:

//     long long helper(int mid , vector<int>& nums, vector<int>& cost){
//         long long total = 0;
//         for(int i=0;i<nums.size();i++)
//         {
//             total += abs(nums[i] - mid)*cost[i];
//         } 
//         return total;
//     }

//     long long minCost(vector<int>& nums, vector<int>& cost) {
//         int left = nums[0];
//         int right = nums[0];
//         long long ans = 0;

//         for(int i:nums){
//             left = min(left , i);
//             right = max(right , 0);
//         } 

//         while(left <= right){
//             int mid = (left+right)/2;

//             long long cost1 = helper(mid , nums , cost);
//             long long cost2 = helper(mid+1 , nums , cost);

//             if(cost1 > cost2){
//                 left = mid+1;
//                 ans = cost2;
//             } 

//             else
//             {
//                 right = mid;
//                 ans = cost1;
//             }
//         }
//         return ans;
//     }
// };





class Solution {
public:
    long minCost(vector<int>& nums, vector<int>& cost) {
        int left = nums[0];
        int right = nums[0];
        for (int i : nums) {
            left = min(left, i);
            right = max(right, i);
        }
        long ans = 0;
        while (left < right) {
            int mid = (left + right) / 2;
            long cost1 = helper(nums, cost, mid);
            long cost2 = helper(nums, cost, mid + 1);
            if (cost1 > cost2) {
                left = mid + 1;
                ans = cost2;
            } else {
                right = mid;
                ans = cost1;
            }
        }
        return ans;
    }

    long helper(vector<int>& nums, vector<int>& cost, int all) {
        long totalCost = 0L;
        for (int i = 0; i < nums.size(); i++) {
            totalCost += 1L * abs(nums[i] - all) * cost[i];
        }
        return totalCost;
    }
};