class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp(nums);
        vector<int> ans;
        int val;
        if(nums.size()==2){
            if(nums[0]+nums[1]==target){
                ans.push_back(0);
                ans.push_back(1);
                return ans;
            }
        }
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]] = i;
        }
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i!=j){
            if(nums[i]+nums[j]==target){
                val = nums[i];
                ans.push_back(mp[nums[i]]);
                ans.push_back(mp[nums[j]]);
                break;
            }
            else if(nums[i]+nums[j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        if(ans[0]==ans[1]) {
            vector<int> ans1;
            for(int i=0;i<temp.size();i++){
                if(temp[i]==val){
                    ans1.push_back(i);
                }
            }
            return ans1;
        }
        return ans;
    }
};