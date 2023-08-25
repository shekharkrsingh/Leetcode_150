class Solution {
public:
    int climbStairs(int n) {
        int firstPre=1;
        int secondPre=0;
        int ans=0;
        while(n!=0)
        {
            int ans=0;
            ans=firstPre+secondPre;
            secondPre=firstPre;
            firstPre=ans;
            n--;
        }
        return firstPre;
    }
};