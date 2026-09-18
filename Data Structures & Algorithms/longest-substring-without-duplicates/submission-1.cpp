class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max {};
        set<char> temp;

        for(int i = 0; i<s.size(); i++){
            int size = temp.size();

            if(!temp.contains(s[i])) {
                
                size++;
            }
            else{
                temp.clear();
               
            }
            
            temp.insert(s[i]);

            if(size > max) max = size;

            for(auto item : temp) cout<<item;
            cout<<endl;
        }
        return max;
    }
};
