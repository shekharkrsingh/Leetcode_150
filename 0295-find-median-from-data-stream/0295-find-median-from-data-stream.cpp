class MedianFinder {
    priority_queue<int> first;
   priority_queue <int, vector<int>, greater<int>> second;
public:
    MedianFinder() {
    }
    
    void addNum(int num) {
        if(first.empty())
        {
            first.push(num);
            return;
        }
        if(first.size()> second.size())
        {
            first.push(num);
            second.push(first.top());
            first.pop();
            cout<<first.top()<<" "<<second.top();
            return;
        }
        if(first.size()<second.size())
        {
            second.push(num);
            first.push(second.top());
            second.pop();
            return;
        }
        if(first.size()==second.size())
        {
            if(first.top()>=num)
            {
                first.push(num);
            }
            else{
                second.push(num);
            }
        }
    }
    
    double findMedian() {
        if(first.size()==second.size())
        {
            return (double(first.top())+ double(second.top()))/2;
        }
        if(first.size()>second.size())
        return first.top();
        return second.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */