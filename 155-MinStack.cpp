// https://leetcode.com/problems/min-stack/description/

class MinStack {
        vector<int> stackObj;
        vector<int> minValues;
public:
    MinStack() {
    }
    
    void push(int val) {
        stackObj.push_back(val);
        if (minValues.empty())
        {
            minValues.push_back(val);
        }
        else 
        {
            minValues.push_back(min(val, minValues.back()));
        }
    }
    
    void pop() {
        if (!stackObj.empty())
        {
            stackObj.pop_back();
            minValues.pop_back();
        }
    }
    
    int top() {
        return stackObj.back();
    }
    
    int getMin() {
        return minValues.back();
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