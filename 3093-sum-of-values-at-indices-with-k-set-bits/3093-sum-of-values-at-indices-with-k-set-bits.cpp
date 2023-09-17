class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sm = 0;

        for(int i=0;i<nums.size();i++){
            int tmp = i;
            int cnt = 0;
            while(tmp){
                if(tmp % 2 == 1) cnt++;
                tmp /= 2;
            }

            if(cnt == k) sm += nums[i];
        }
        return sm;
    }
};