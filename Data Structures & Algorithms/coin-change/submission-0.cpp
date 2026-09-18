class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0) return 0;
        if(amount % coins[0] != 0) return -1;
        int index = coins.size() - 1;
        int res = 0;

        while(amount > 0){
            cout<<amount<< " "<< index<<endl;
            amount -= coins[index];

            if(amount < 0) {
                amount += coins[index];
                index --;
            }
            else if(amount == 0) return res+1;
            else {
                res++;
            }

            if(index < 0) return res;
        }

        return res;
    }
};
