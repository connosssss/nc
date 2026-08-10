class MinStack {
    vector<int> s;
    vector<int> minstack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(!minstack.empty()){
            if(val < minstack.back()) minstack.push_back(val);
            else minstack.push_back(minstack.back());

            
        }
        else minstack.push_back(val);

        s.push_back(val);
    }
    
    void pop() {
        minstack.pop_back();
        s.pop_back();
    }
    
    int top() {
        return s.back();
    }
    
    int getMin() {
        return minstack.back();
    }
};
