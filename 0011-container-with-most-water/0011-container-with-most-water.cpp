class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVal=0;
        int n=height.size();
        int str=0;
        int end=n-1;
        while(1)
        {
            if(str>end)
            break;
            maxVal=max(maxVal, min(height[str], height[end])*(end-str));
            if(height[str]>=height[end])
            end--;
            else
            str++;
        }
        return maxVal;
    }
};