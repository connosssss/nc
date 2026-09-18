class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> temp {};
        string res {};

        for(int num : nums){
            temp.push_back(to_string(num));

        }

        sort(temp.begin(), temp.end(), [](string& a, string& b) {
            return a + b > b + a;
        });

        for(string& asdf : temp) res += asdf;
        return res[0] == "0" ? "0" : res;
    }
};