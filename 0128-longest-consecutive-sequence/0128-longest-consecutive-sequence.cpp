// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int count = 1;
//         int mx = INT_MIN;
//         sort(nums.begin(),nums.end());
//         unique(nums.begin(),nums.end());
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i+1]-nums[i] == -1){
//                 count++;
//             } 

//             else{
//                 mx = max(mx,count);
//                 count = 1;
//             } 
//         } 

//         mx = max(mx,count);

//         if(nums.size()>0) return mx;
//         else return 0;
//     }
// }; 

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int c=1,m=1;
           sort(nums.begin(),nums.end());
        unique(nums.begin(),nums.end());
     
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]-nums[i+1]==-1){
                    c++;
            }
            else {
            m=max(m,c);
            c=1;
            }
        }
        m=max(m,c);
// for(auto &i:nums){
//     cout<<i<<" ";
// }

        if(n>0) return m;
        else 
        return 0;
        
    }
};