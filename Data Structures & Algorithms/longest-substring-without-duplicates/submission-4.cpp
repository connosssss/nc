class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r {}, l {};
        unordered_set<char> charset;
        int max {0};

        for(int i {0}; i<s.size(); i++){
            if(!charset.contains(s[i])){
                ++r;
                charset.insert(s[i]);
            }
            else{
                while(charset.contains(s[i])){
                    charset.erase(s[l]);
                    ++l;
                }
                charset.insert(s[i]);
            }

            if(charset.size() > max) max = charset.size();
        }

        return max;
    }
};