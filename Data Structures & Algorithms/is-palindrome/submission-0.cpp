class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(int i = 0; i<s.length(); i++){
            if(isalnum(s[i])) temp.push_back(toupper(s[i]));
        }
        
        for(int i = 0; i<temp.length(); i++){
            if (temp[i] != temp[temp.length()-1-i]){
                cout<< temp<< " " << i;
                return false;
            }
        }
        return true;
    }
};
