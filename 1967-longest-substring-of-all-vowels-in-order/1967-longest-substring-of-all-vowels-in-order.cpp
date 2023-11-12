class Solution {
public:
    int longestBeautifulSubstring(string word) {
        set<char>s;
        if(word.size() < 5) return 0;
        int cnt = 1 , mx = 0;
        s.insert(word[0]);

        for(int i=1;i<word.size();i++){
            if(word[i] >= word[i-1]) cnt++;
            else{
                s.clear();
                cnt = 1;
            } 
            s.insert(word[i]);
            if(s.size() == 5){
                mx = max(mx , cnt);
            }
        }
        return mx;
    }
};