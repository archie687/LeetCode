class Solution {
public:

    int sum(int num){
        int cnt = 0 , total = 0;
        for(int i=2;i<num;i++){
            
            if(num%i == 0){
                cnt++;
                total += i;
            } 

            if(cnt >= 3){
                total=0;
                break;
            }
        } 

        if(cnt == 2){
            return total+1+num;
        } 
        return 0;

    }

    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;

        for(int i=0;i<nums.size();i++){
            ans += sum(nums[i]);
        }

        return ans;
    }
};