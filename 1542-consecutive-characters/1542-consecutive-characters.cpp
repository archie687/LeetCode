class Solution {
public:
    int maxPower(string s) {
        int cnt = 0;
        int mx = 0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i] == s[i+1]){
                cnt++;
            } 
          
            else{
                
                cnt = 0;
            } 

            mx = max(mx , cnt);
        } 
        return mx+1;
    }
};