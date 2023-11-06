class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
        if(k == 1){
            return max(arr[0] , arr[1]);
        } 

        if(k >= arr.size()){
            return *std::max_element(arr.begin() , arr.end());
        }

        int curr_win = arr[0];
        int cnt = 0;

        for(int i=1;i<arr.size();i++){
            if(curr_win > arr[i]){
                cnt++;
            } 
            else{
                curr_win = arr[i];
                cnt = 1;
            } 

            if(cnt == k){
                return curr_win;
            }
        }
        return curr_win;
    }
};