class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0 || t.size() == 0 || s.size() > t.size()) return false;
       

        
        int sindex {};

        for(int i {}; i<t.size(); i++){
            if(s[sindex] == t[i]) sindex++;

            if(sindex == s.size()) return true;
        }

        return false;
        
    }
};