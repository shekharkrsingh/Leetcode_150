class Solution {
public:
    int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];

    int prev2 = nums[0];  // Maximum money that can be robbed if considering houses up to index i-2
    int prev1 = max(nums[0], nums[1]);  // Maximum money that can be robbed if considering houses up to index i-1

    for (int i = 2; i < n; i++) {
        int current = max(prev1, prev2 + nums[i]);
        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}
};