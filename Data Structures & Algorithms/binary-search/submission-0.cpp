class Solution {
public:
    int search(vector<int>& nums, int target) {
        /*int right = nums.size() - 1;
        int left {0};
        
        while(right != left){
            int mid = (right - left)/2;
            if (nums[mid] > target){
                right = mid;
            }
            else if (nums[mid] == target) {
                return mid;
            }
            else{
                left = mid;
                }

            if (left == right && nums[left] != target) return -1;
            cout<<left<<" "<< right;
        }
        return -1; */





        int left = 0, right = nums.size() -1;

        while(left <= right){
            int mid = left + ((right-left) / 2);

            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) left = mid+1;
            else right = mid-1;

        }
        return -1;
    }
};
