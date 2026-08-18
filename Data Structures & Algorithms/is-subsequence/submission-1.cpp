class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(t.size() == 0 || s.size() > t.size()) return false;
        if(s.size() == 0) return true;
       

        
        int sindex {};

        for(int i {}; i<t.size(); i++){
            if(s[sindex] == t[i]) sindex++;

            if(sindex == s.size()) return true;
        }

        return false;
        
    }
};