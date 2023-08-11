class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& interval, vector<int>& newInterval) {
        
        interval.push_back(newInterval);
        sort(interval.begin(), interval.end());
        vector<vector<int>> result;
        result.push_back(interval[0]);
        for(int i=1;i<interval.size();i++)
        {
            int n=result.size();
            if(result[n-1][1]>=interval[i][0])
            {
                result[n-1][1]=max(result[n-1][1], interval[i][1]);
                continue;
            }
            result.push_back(interval[i]);
        }
        return result;

    }
};