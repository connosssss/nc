class Solution {
    int res {};
public:
    int shipWithinDays(vector<int>& weights, int days) {
        

        res = accumulate(weights.begin(), weights.end(), 0);
        int l = *max_element(weights.begin(), weights.end()), r = res;

        while(l < r){
            int mid = (r-l)/2 + l;
            cout<<"R "<<r<<" Mid"<< mid<<" l "<<l<<endl;
            if(test(weights, days, mid)){
                cout<<"PASSED"<<endl;
                r = mid;
                res = mid;

            }


            else{
                l = mid+1;
            }
        }


        return res;

    }


    bool test(vector<int>& weights, int days, int cap){
        cout<<"TEST ";
       // for(auto w : weights) cout<<w<<" ";
        cout<<days<<" "<<cap<< " "<<endl;

        int day_counter {1};
        int temp = cap;
        for(auto w : weights){
            if(temp-w < 0){
                day_counter++;
                temp = cap - w;
            }

            else{
                temp -=w;
            }




        }
        if(day_counter > days) return false;
        return true;
    }
};