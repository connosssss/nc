class Solution {
public:
    int rob(vector<int>& nums) {

       vector<int> arr1, arr2;

       if(nums.size() == 0) return 0;
       if(nums.size() == 1) return nums[0];
       if (nums.size() == 2) return max(nums[0], nums[1]);

       copy(nums.begin() + 1, nums.end(), back_inserter(arr1));
       copy(nums.begin(), nums.end() - 1, back_inserter(arr2));

        

        int res[2] {0,0};
       vector<int> dp (nums.size()-1);



        for(auto e : arr1) cout<<" "<<e;
        cout<<endl;
        for(auto e : arr2) cout<< " " << e;
        //pass 1
        dp[0] = arr1[0];
        dp[1] = max(arr1[0], arr1[1]);

        for(int i {2}; i<arr1.size(); i++) dp[i] = max(dp[i-1], dp[i-2] + arr1[i]);

        res[0] = dp[arr1.size()-1];
        cout<<endl<<res[0];

        //pass 2 
        dp[0] = arr2[0];
        dp[1] = max(arr2[0], arr2[1]);

        for(int i {2}; i<arr2.size(); i++) dp[i] = max(dp[i-1], dp[i-2] + arr2[i]);

        res[1] = dp[arr2.size()-1];
        cout<<endl<<res[1];
       return max(res[0], res[1]); 
    }


};
