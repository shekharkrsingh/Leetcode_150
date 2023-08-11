class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int> mp;
        int maxVal=INT_MIN;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=1;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]-1]==1|| mp[nums[i]-1]==2)
            mp[nums[i]]=2;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]==1){
            int cnt=1;
            while(mp[nums[i]+cnt]==2)
            {
                cnt++;
            }
            maxVal=max(maxVal, cnt);
            }
        
        }
        if(n==0)
        return 0;
        return maxVal;
    }
};