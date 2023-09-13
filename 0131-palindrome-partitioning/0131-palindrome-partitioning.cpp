class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>str;
        vector<string>ans;

        solve(str , ans , s , 0);
        return str;
    }

    void solve(vector<vector<string>>& str , vector<string>& ans , string s , int index){
        if(index == s.size()){
            str.push_back(ans);
            return;
        } 

        for(int i=index;i<s.size();i++){
            if(isPalindrome(s , index , i)){
                ans.push_back(s.substr(index , i-index+1));
                solve(str , ans , s , i+1);
                ans.pop_back();
            }
        }
    }

    bool isPalindrome(string s , int start , int end){
        while(start <= end){
            if(s[start++] != s[end--]){
                return false;
            }
        }
        return true;
    }   
};