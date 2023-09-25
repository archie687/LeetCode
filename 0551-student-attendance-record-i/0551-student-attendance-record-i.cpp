class Solution {
public:
    bool checkRecord(string s) {
        int a = 0 , l = 0;
        bool flag = true;

        for(int i=0;i<s.size();i++){
            if(s[i] == 'A')a++;
            if(s[i] == 'L')l++;
            else l = 0;
            if(l >= 3) flag = false;
        } 

        if(flag == false || a > 1) return false;
        return true;
    }
};