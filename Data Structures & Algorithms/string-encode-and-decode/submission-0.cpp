class Solution {
public:

    string encode(vector<string>& strs) {

        string res = "";
        for (const string& str : strs) {
            res += to_string(str.size()) + "#" + str;
        }
        
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        int n = s.size();

        while (i < n) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }

            int length = stoi(s.substr(i, j - i));
            i = j + 1;

            res.push_back(s.substr(i, length));
            i += length;
        }

        return res;
    }
};