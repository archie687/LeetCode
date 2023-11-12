class Solution {
public:

    bool isVowel(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }

    int countVowelSubstrings(string word) {
        unordered_map<int , int>mp;
        int cnt = 0;
        for(int i=0;i<word.size();i++){
            mp.clear();
            for(int j=i;j<word.size() && isVowel(word[j]);j++){
                mp[word[j]]++;
                if(mp.size() == 5) cnt++;
            }
        }
        return cnt;
    }
};