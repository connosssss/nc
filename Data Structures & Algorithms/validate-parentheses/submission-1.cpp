class Solution {
public:
    bool isValid(string s) {
        //unordered_map m {{')', '('}, {'}', '{'}, {']', '['}};
        unordered_map<char, char> m {{'(', ')'}, {'{', '}'}, {'[', ']'}};
        stack<char> st {};

        if(s.length() < 1) return false;
        

        for(int i = 0; i<s.length(); i++){
            if(st.size() > 0){
            if( s[i] == st.top()) {
                st.pop();
            }}

            else st.push(m[s[i]]);
        }


        return st.size() == 0;
    }
};
