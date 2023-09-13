class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        for(int i=low;i<=high;i++){
            string str = to_string(i);
            int t = 0 , n = str.size();

            for(int j=0;j<n/2;j++){
                t += str[j] - str[n-1-j];
            } 

            if(t == 0 && n%2 == 0) ans++;
        }
        return ans;
    }
};