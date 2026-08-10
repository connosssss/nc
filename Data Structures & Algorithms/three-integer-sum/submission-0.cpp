class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
        std::sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for(int i {}; i< nums.size(); ++i){
            if(i> 0 && nums[i] == nums[i-1]) continue;
            int l = i+1; 
            int r = nums.size()-1;
            

            while(l<r){
                int cur = nums[r]+nums[l]+nums[i];
                if(cur > 0) r--;
                else if(cur<0) l++;
                else if(cur == 0 && l != i && r != i){
                    vector<int> temp {nums[l], nums[i], nums[r]};
                    res.push_back(temp);
                    l++; r--;

                    while(l < r && nums[l] == nums[l-1]) {
                        l++;
                    }
                } 
                //idk if this part matters
                else{l++;}
            }
        }
        
        
        return res;

    }
};
