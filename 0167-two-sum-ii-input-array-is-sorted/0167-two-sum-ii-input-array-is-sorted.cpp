class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int str=0;
        int end=n-1;
        while(1)
        {
            if(numbers[str]+numbers[end]==target)
            {
                vector<int> ans;
                ans.push_back(str+1);
                ans.push_back(end+1);
                return ans;
            }
            if(numbers[str]+ numbers[end]> target)
            end--;
            else
            str++;
        }
    }
};