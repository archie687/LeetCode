class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>vec;
        int curr = 1;
        for(int i=0;i<target.size();i++){

            while(curr < target[i]){
                vec.push_back("Push");
                vec.push_back("Pop");
                curr++;
            } 
            curr++;
            vec.push_back("Push");
        }
        return vec;
    }
};