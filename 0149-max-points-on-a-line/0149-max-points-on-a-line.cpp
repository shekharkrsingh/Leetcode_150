class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int maxVal=INT_MIN;
        int size=points.size();
        if(size==1)
        return 1;
        if(size==2)
        return 2;
        for(int i=0;i<size-2;i++)
        {
            for(int j=i+1;j<size-1;j++)
            { int cnt=0;
                for(int k=j+1;k<size;k++)
                {
                    if(((points[i][1]-points[j][1])*(points[i][0]-points[k][0]))==((points[i][1]-points[k][1])*(points[i][0]-points[j][0])))
                    {
                        cnt++;
                    }
                }
                maxVal=max(maxVal, cnt);
            }
        }
        return maxVal+2;
    }
};