class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<pair<int, int>> s;
        vector<int> res (temperatures.size(), 0);


        for(int i {}; i<temperatures.size(); ++i){
           
            if(!s.empty()) cout<<"i: "<<i<<" s: "<<s.back().first<<" "<<s.back().second<<endl;
            while(!s.empty() && s.back().first < temperatures[i]){
                
                pair<int,int> top = s.back();
                res[top.second] = i-top.second;
                s.pop_back();
            }
            
            s.push_back({temperatures[i], i});
            
        }

        return res;
    }
};
