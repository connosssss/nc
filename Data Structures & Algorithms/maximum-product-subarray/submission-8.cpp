class Solution {

   
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        

        int gmax = nums[0];
        int mi = nums[0], ma = nums[0];

        for(int i {1}; i< nums.size(); ++i){
         //   cout<<"min: "<<mi<<" max: "<<ma<<" gmax: "<<gmax<<endl;
            int temp = ma;
            ma = max({nums[i], nums[i] * ma, nums[i] * mi});
            mi = min({nums[i], nums[i] * temp, nums[i] * mi});
            gmax = max(ma, gmax);
        }   
            cout<<"min: "<<mi<<" max: "<<ma<<" gmax: "<<gmax<<endl;


        return gmax;
    }
};
