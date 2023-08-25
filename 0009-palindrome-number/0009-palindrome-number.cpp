class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        int cnt=0;
        int num=x;
        while(num!=0)
        {
            cnt++;
            num/=10;
        }
        while(x!=0)
        {
            // cout<<x%10<<" "<<int(x/(pow(10, cnt-1)))<<endl;
            if(x%10!=int(x/pow(10, cnt-1)))
            return false;
            int t=pow(10, cnt-1);
            x=x%t;
            x=x/10;
            cnt-=2;
        }
        return true;
    }
};