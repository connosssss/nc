class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(std::accumulate(cost.begin(), cost.end(), 0) > std::accumulate(gas.begin(), gas.end(), 0)) return -1;

        int index {};
        int cur {};


        for(int i {}; i<cost.size()-1; ++i){
            cur = gas[i] - cost[i] + cur;

            if(cur < 0){
                cur = 0;
                index = i+1;
            }
        }


        return index;


    }
/*
    int test(int index, vector<int>& gas, vector<int>& cost){
        int f = gas[index];
        
        while(f > 0){
            if(index <= gas.size()-1){
                f-= cost[index];
                index++;
            }
            else{
                index = 0;
                f -= cost[index];
                index++;
            }
        }

        return index;
    } */
};
