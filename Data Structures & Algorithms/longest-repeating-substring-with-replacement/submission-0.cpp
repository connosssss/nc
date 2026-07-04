class Solution {
public:
    int characterReplacement(string s, int k) {
        set<char> charset{s.begin(), s.end()};
        int res {};

        for (char c : charset){
            int l = 0, r = 0;
            
           

            int charcount {};

            while (r < s.length()) {
                
                if (s[r] == c) {
                    charcount++;
                }
                
                
                while ((r - l + 1) - charcount > k) {
                    if (s[l] == c) {
                        charcount--;
                    }

                    l++;
                }
                
                res = max(res, r - l + 1);
                
                ++r;
            }

        }
        return res;
    }
};
