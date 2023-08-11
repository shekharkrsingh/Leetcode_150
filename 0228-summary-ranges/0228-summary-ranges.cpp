class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        deque<int> q;
        vector<string> v;
        auto begin = nums.begin();

        while (begin != nums.end()){
            if (q.empty() || *begin == q.back() + 1){
                q.push_back(*begin);
                ++begin;
            }
            if (begin == nums.end() || *begin !=q.back() + 1){
                string str;
                if (q.size() == 1)
                    str = to_string(q.front());
                else
                    str += to_string(q.front()) + "->" + to_string(q.back());
                
                v.push_back(str);
                q.clear();
            }
        }
        return v;
    }
};