class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        int n=nums.size();
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                break;
            }
            if(i!=0)
            {
                if(nums[i-1]==nums[i])
                {
                    continue;
                }
            }
            int first=nums[i];
            
                int str=i+1, end=n-1;
                while(end> str)
                {
                    if(str!=i+1&&nums[str-1]==nums[str])
                    {
                        str++;
                        continue;
                    }
                    int sum=first+nums[str]+nums[end];
                    if(sum==0)
                    {
                    vector<int> v1;
                       v1.push_back(first);
                        v1.push_back(nums[str]);
                        v1.push_back(nums[end]);
                        v.push_back(v1);
                        str++;
                        k++;
                        continue;
                    }else
                    if(sum>0)
                    {
                        end--;
                        continue;
                    }else
                    if(sum<0)
                    {
                        str++;
                        continue;
                    }
                }
            
        }
        return v;
    }
};