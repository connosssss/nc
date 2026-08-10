class Solution {
public:
    bool checkInclusion(string s2, string s1) {

        unordered_map<char, int> m {};
        if(s2.size() > s1.size()) return false;


        for(char c : s2) m[c] += 1;

        for(int i {}; i<=s1.size()-s2.size(); ++i){
            if(m[s1[i]] != 0 ){
                unordered_map<char, int> copy = m;
                cout<<"attempt at "<<s1[i]<<endl;

                bool found = true;
                for(int j {}; j<s2.size(); j++){

                    cout<<"j = "<< j<<" size "<<s2.size()<<endl;
                    if(j == s2.size()) return true;

                    if(copy[s1[i+j]] > 0){
                        --copy[s1[i+j]];
                    }
                    else{
                        cout<<"end at j "<<j<<endl;
                        found = false;
                        break;}

                }

                if(found) return true;

                

            }
            
        }   

        return false;
    }
};
