class Solution {
public:
    // base = l - r
    // height = height[l] and height[r]
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size()-1;
        int maxArea = 0;
        while(l<r){
            int base = r - l;
            int height = min(heights[l], heights[r]);
            if(maxArea < base * height){
                maxArea = base * height;
            }else if(heights[l] < heights[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxArea;
    }
};
