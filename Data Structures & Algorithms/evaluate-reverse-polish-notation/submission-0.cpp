class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> res;

        for(auto token : tokens){
            if(res.size() < 2){
                res.push_back(stoi(token));
                continue;
            } 

            int num1, num2;
            num2 = res.back();
            res.pop_back();
            num1 = res.back();
            res.pop_back();

            if(token == "+"){
                res.push_back(num1+num2);
            }
            else if(token == "-"){
                res.push_back(num1-num2);
            }
            else if(token =="*"){
                res.push_back(num1*num2);
            }
            else {
                res.push_back(num1/num2);
            }


            
        }

        return res.back();
    }
};
