class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int r = n - 1;
        int l = 0;
        int max1 = 0;
        while(l < r){
            int w = r - l;
            int h = min(heights[l],heights[r]);
            int a = w * h;
            max1 = max(max1,a);
            if(heights[l] < heights[r]){
                l ++;
            }
            else{
                r--;
            }


        }
        return max1;
        
    }
};
