class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r {}, l {};
        unordered_set<char> charset;
        int max {};


        for(int i {0}; i<s.size(); i++){
            if(!charset.contains(s[i])){
                ++r;
                charset.insert(s[i]);
            }
            else{
                ++l;
                charset.erase(s[l]);
                charset.insert(s[i]);

            }


            if(r-l > max) max = r-l;
            cout<<i<<" "<<l<< " "<< r;

        }

        return max;

    }
};
