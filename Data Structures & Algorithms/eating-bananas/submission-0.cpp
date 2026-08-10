class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxe = *max_element(piles.begin(), piles.end());
        int lk{1}, rk{maxe}, k {};

        while(lk <= rk){
            k = (rk-lk)/2+lk;
            int hours {};
            for(auto e : piles) 
                hours += ceil(static_cast<double>(e) / k);
            
            if(hours <= h) rk = k-1;
            else lk = k + 1;
        } 

        return rk + 1;
    }
};
