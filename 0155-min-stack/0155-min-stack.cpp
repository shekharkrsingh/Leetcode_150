class MinStack {
int arr[3*10000]={0};
int t=-1;
public:
    MinStack() {

    }
    
    void push(int val) {
        t++;
        arr[t]=val;
    }
    
    void pop() {
        t--;
    }
    
    int top() {
        return arr[t];
    }
    
    int getMin() {
        int minVal=INT_MAX;
        for(int i=0;i<=t;i++)
        {
            minVal=min(minVal, arr[i]);
        }
        return minVal;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */