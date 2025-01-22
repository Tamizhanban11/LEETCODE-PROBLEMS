class MinStack {
public:
      stack<int>s;
      stack<int>s2;
    MinStack() {}
    
    void push(int x) {
        s.push(x);
        if(s2.empty() || x<=s2.top())
        s2.push(x);

    }

    
    void pop() {
       if (!s.empty() && !s2.empty() && s.top() == s2.top())
        s2.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
        
    }
    
    int getMin() {
        return s2.top();
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