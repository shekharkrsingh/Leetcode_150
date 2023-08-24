class Solution {
    public int[] searchRange(int[] nums, int target) {
        int first=Integer.MAX_VALUE;
        int last=Integer.MIN_VALUE;
        boolean flag=false;
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]==target)
            {
                flag=true;
                first=Math.min(first, i);
                last=Math.max(last, i);
            }
        }
        int ans[]=new int[2];
        if(!flag)
        {
            ans[0]=-1;
            ans[1]=-1;
            return ans;
        }
        ans[0]=first;
        ans[1]=last;
        return ans;
    }
}