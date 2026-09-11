class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> pre (nums.size()+1);
        pre[0] = nums[0];
        for(int i{1}; i< nums.size(); i++){
            pre[i] = pre[i-1] + nums[i];
        }

        
       
        if(pre[nums.size()-1] - pre[0] == 0) return 0;
        for(int i {1}; i<nums.size(); ++i){
            cout<<pre[i-1] << " "<<pre[nums.size()-1] - pre[i]<<endl;
            if(pre[i-1] == (pre[nums.size()-1] - pre[i]))return i;
        }



        return -1;

    }
};