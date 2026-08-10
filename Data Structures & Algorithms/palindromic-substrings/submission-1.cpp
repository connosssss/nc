class Solution {
public:
    int countSubstrings(string s) {
        int res {};

        int l {}, r{};

        for(int i {}; i<s.size(); ++i){
            l = i;
            r = i;

            while (l >= 0 and r < s.size()){
                if(s[l] == s[r]) {
                    res++;
                    l--;
                    r++;
                }
                else break;
            }

            

        }
            cout <<"res after pass 1: " << res<<endl;
        for(int i {}; i<s.size(); ++i){
            l = i;
            r = i+1;

            while (l >= 0 and r < s.size()){
                if(s[l] == s[r]) {
                    res++;
                    l--;
                    r++;
                }
                else break;
            }

            

        }


        return res;
    }
};
