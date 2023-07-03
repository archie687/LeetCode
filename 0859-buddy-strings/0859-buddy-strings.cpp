class Solution {
public:
    bool buddyStrings(string s, string goal) {
       if(s == goal){
           set<char>temp(s.begin() , s.end());
           return temp.size() < goal.size();
       }
       
        int i = 0;
        int j = s.size()-1;

        while(i<j && s[i] == goal[i]){
            i++;
        } 

        while(i<j && s[j] == goal[j]){
            j--;
        } 

        if(i<j){
            swap(s[i] , s[j]);
        } 

        return s == goal;
    }
};