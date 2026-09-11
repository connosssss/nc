class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = nums[0];
        int i {1};
        while(i < nums.size()) {
            if(nums[i] == prev){
                nums.erase(nums.begin() + i);

                continue;
            }
            else prev = nums[i];
            ++i;
            for(auto n : nums) cout<<n<<" "; cout<<endl;
        }

        return nums.size();
    }
};