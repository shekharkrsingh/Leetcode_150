bool ch(int n, map<int, bool> &m)
{
    if(n==1)
    return true;
    int temp=0;
    while(n!=0)
    {
        temp+=(n%10)*(n%10);
        n=n/10;
    }
    if(m[temp]==true)
    return false;
    m[temp]=true;
    return ch(temp, m);
}


class Solution {
public:
    bool isHappy(int n) {
       map<int, bool> m;
       m[n]=true;
       return ch(n, m);

    }
};