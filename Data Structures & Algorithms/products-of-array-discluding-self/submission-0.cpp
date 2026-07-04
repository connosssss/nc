class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        vector<int> pre (nums.size(), 1);
        vector<int> suf (nums.size(), 1);

        
        for(int i = 1; i< nums.size(); i++){
            pre[i] = nums[i-1] * pre[i-1];
        }
        for(int i = nums.size()-2; i>=0; i--){
            suf[i] = nums[i+1] * suf[i+1];
            
        }
        for(int i = 0; i<nums.size(); i++){
            res[i] = pre[i]*suf[i];
        }

        for(auto num: pre){
            cout<< num<< " ";
        }cout<<endl;
        for(auto num: suf){
            cout<< num<< " ";
        }
        return res;
    }
};
