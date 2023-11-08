class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        
        if(sx == fx && sy == fy && t == 1) return  false;

        int x_diff = abs(fx-sx);
        int y_diff = abs(fy-sy);

        int diff = max(x_diff , y_diff);

        if(diff <= t) return true;
        return false;
    }
};