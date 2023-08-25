class Solution {
public:
    int trailingZeroes(int n) {
        int cnt=0;
        cnt+=n/10;
        int t=25;
        while(t<=n)
        {
            cout<<"x"<<endl;
            cnt+=n/t;
            t*=5;
        }
        t=5;
        while(t<=n)
        {
            cnt++;
            t+=10;
        }
        return cnt;
    }
};