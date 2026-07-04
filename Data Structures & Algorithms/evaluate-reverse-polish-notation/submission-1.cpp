class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> res;
        unordered_set<string> operators {"+", "-", "*", "/"};

        for(auto token : tokens){
            if(!operators.contains(token)){
                res.push_back(std::stoi(token));
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
