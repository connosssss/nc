class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l {}, r {static_cast<int>(numbers.size()-1)};


        while(l<r){
            int temp = numbers[l] + numbers[r];

            if(temp >target) r--;
            else if(temp < target) l++;
            else return vector<int> {l+1, r+1};
        }



        return {};

    }
};
