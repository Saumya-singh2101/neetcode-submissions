class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mini=0;
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            int hrs=0;
            for(int it:piles){
               hrs+=(it+mid-1)/mid;
            }
            if(hrs<=h){
                mini=mid;
                high=mid-1;
            }
            else{
             low=mid+1;
            }
        }
        return mini;
    }
};
