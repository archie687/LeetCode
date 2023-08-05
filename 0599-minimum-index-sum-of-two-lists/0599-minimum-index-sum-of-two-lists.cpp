class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>v;
        vector<string>vec;
        vector<vector<int>>ind;
        int mn = INT_MAX;
        for(int i=0;i<list1.size();i++){
            for(int j=0;j<list2.size();j++){
                if(list1[i] == list2[j] && mn >= (i+j)){
                    
                    v.push_back(list1[i]);
                    ind.push_back({i , j});
                    mn = i+j;
                    break;
                }
            }
        }

        for(int i=0;i<ind.size();i++){
            for(int j=0;j<ind[i].size()-1;j++){
                if(ind[i][j]+ind[i][j+1]== mn){
                    vec.push_back(v[i]);
                }
            }
        }
        return vec;
    }
};