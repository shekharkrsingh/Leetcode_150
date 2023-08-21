class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0;
        int minVal=INT_MAX;
        int n=nums.size();
        int totalSum=0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            minVal=min(minVal, sum);
            if(sum>0)
            sum=0;
            totalSum+=nums[i];
            if(nums[i]>0)
            flag=true;
        }
        sum=0;
        int maxVal=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            maxVal=max(maxVal, sum);
            if(sum<0)
            sum=0;
        }
        if(!flag)
        {
            int large=INT_MIN;
            for(int i=0;i<n;i++)
            {
                large=max(large, nums[i]);            
            }
            return large;
        }
        return max(maxVal, totalSum-minVal);
    }
};