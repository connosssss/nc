class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        cout<<static_cast<int>('a');
        vector<vector<string>> res;
        map<string, vector<string>> m;

        for(string word : strs){
            string temp (26, 0);
            for (char c : word){
                int index = c - 'a';

                ++temp[index];
            }
            m[temp].push_back(word);
        }

        for(auto [key, value] : m){
            res.push_back(value);
        }

        return res;
    }

    
    
};
