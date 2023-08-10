class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, vector<int>> mp;
        // mp[5].push_back(6);
        for(int i=0;i<n;i++)
        {
             if(mp[nums[i]].size()!=0)
             {
                cout<<"t"<<endl;
                int l=mp[nums[i]].size();
                cout<<l<<endl;
                for(int j=0;j<l;j++)
                {
                    if(abs(mp[nums[i]][j]-i)<=k)
                    return true;
                }
             }
             mp[nums[i]].push_back(i);
        }
        return false;
    }
};