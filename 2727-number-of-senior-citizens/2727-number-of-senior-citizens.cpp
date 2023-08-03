class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        int num = 0;
        string str = "";
        for(int i=0;i<details.size();i++){
            str = "";
             str += details[i][11];
            str += details[i][12];

             num = stoi(str);
            if(num > 60){
                cnt++;
            }
        }
return cnt;
    }
};