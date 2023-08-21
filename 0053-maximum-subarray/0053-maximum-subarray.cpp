class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxVal=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            maxVal=max(maxVal, sum);
            if(sum<0)
            sum=0;
        }
        return maxVal;
    }
};