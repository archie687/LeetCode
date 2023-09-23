class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cnt_l = 0;
        int cnt_r = 0;

        for(int i=0;i<moves.size();i++){
            if(moves[i] == 'L' || moves[i] == '_') cnt_l--;
            else cnt_l++;
        }
        for(int i=0;i<moves.size();i++){
            if(moves[i] == 'R' || moves[i] == '_') cnt_r--;
            else cnt_r++;
        } 

        int mx = max(abs(cnt_l) , abs(cnt_r));
        return mx;
    }
};