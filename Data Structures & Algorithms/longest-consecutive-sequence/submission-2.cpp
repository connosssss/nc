class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        set<int> s (nums.begin(), nums.end());
        int res {};
        for(int num : s){
            if(s.contains(num-1)) continue;
            int cur = num;
            int temp = 0;


            while(s.contains(cur+1)){
                temp++;
                cur++;
            }

            res = max(res, temp);
        }

        return res+1;
    }
};
