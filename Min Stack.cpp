class MinStack {
public:
    /** initialize your data structure here. */
    stack<pair<int,int>>stak;
    int min = INT_MAX;
    MinStack() {
        
    }
    
    void push(int x) {
        if(x<min)
            min = x;
        stak.push({x,min});
    }
    
    void pop() {
        stak.pop();
        min = stak.empty()? INT_MAX : stak.top().second;
    }
    
    int top() {
        return stak.top().first;
    }
    
    int getMin() {
        return stak.top().second;
    }

};
**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */