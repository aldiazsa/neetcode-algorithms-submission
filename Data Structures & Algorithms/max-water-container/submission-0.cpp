class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size()-1;
        int maxCapacity = 0;
        int shorter_bar = 0;
        int currCapacity = 0;


        while(l < r){
            shorter_bar = min(heights[l], heights[r]);
            currCapacity = shorter_bar * (r-l);
            maxCapacity = max(maxCapacity, currCapacity);
            
            if(heights[l] < heights[r]){
                l++;
            } else {
                r--;
            }
        }
        return maxCapacity;
    }
};
