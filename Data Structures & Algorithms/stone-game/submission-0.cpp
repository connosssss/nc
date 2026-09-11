class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        /*
        int turns = piles.size();
        int alice {}, bob{};
        int pstart {}, pend = piles.size() -1;
        
        for(int i = 0; i< turns; ++i){
            if(i % 2 == 0) {

                if(piles[pstart] > piles[pend]){
                    alice += piles[pstart];
                    pstart++;
                }
                else{
                    alice += piles[pend];
                    pend--;
                }

            }
            else{
                if(piles[pstart] > piles[pend]){
                    bob += piles[pstart];
                    pstart++;
                }
                else{
                    bob += piles[pend];
                    pend--;
                }
            }
        }

        return alice > bob ? true : false; */

        return true;

    }
};