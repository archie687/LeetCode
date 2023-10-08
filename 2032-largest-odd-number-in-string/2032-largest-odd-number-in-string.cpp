class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int ind = -1;

        for(int i=num.size();i>=0;i--){
            if((num[i]-'0') % 2 != 0){
                ind = i;
                break;
            }
        }

        if(ind != -1){
        for(int j=0;j<=ind;j++){
            ans += num[j];
        } }
        return ans;
    }
};