class Solution {
    public int findPeakElement(int[] nums) {
        int n=nums.length;
        for(int i=0;i<n;i++)
        {
            if(i==0 && n-1>i && nums[i+1]<nums[0])
            return 0;
            if(i==n-1 && n>=2 && nums[i-1]<nums[i])
            return n-1;
            if( i!=0 && i!=n-1 && nums[i-1]<nums[i] && nums[i+1]<nums[i])
            {
                return i;
            }
           
        }
        return 0;
    }
}