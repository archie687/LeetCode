class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // int mn = INT_MAX;
        // bool flag = false;
        // for(int i=0;i<nums.size()-1;i++){
        //     int sum = 0;
        //     // int sum = 0;    
            
            
        //     for(int j=i;j<nums.size();j++){
        //         sum += nums[j];
        //         if(sum >= target){
        //             mn = min(mn , j-i+1);
        //             flag = true;
        //         }
        //     }
        // }
        // if(flag == true)
        // return mn;
        // else
        // return 0;  


        int i = 0;
        int j = 0;
        int sum = 0;
        // bool flag = false;
        int mn = nums.size()+1;

        while(j<nums.size()){
            sum += nums[j];

            while(i<=j && sum >= target){
                mn = min(mn , j-i+1);
                sum -= nums[i];
                i++;
            } 
            j++;
        }

        return (mn == nums.size()+1 ? 0:mn);
    }
};