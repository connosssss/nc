class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
            vector<int> s;
            int curmax {1};
            if(nums.size() == 0) return 0;



            s.push_back(nums[0]);


            for(int i {1}; i<nums.size(); ++i){
                
                while(s.size() > 0 && s.back() >= nums[i]) s.pop_back();
                s.push_back(nums[i]);

                for(auto e : s) cout<<e<<" ";
                cout<<endl;
                if(s.size() > curmax) curmax = s.size();
            }

        return curmax;
    }
};
