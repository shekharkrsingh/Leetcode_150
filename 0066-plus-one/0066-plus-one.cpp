class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool flag=false;
        for(auto i: digits)
        {
            if(i!=9)
            flag=true;
        }
        if(flag==false)
        {
            vector<int> v(digits.size()+1,0);
            v[0]=1;
            return v;
        }
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]!=9){
                digits[i]++;
                break;
            }else{
                digits[i]=0;
            }
        }
        return digits;
    }
};