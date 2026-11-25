class Solution {
public:       

        //      0 1 2 3 4 5 
    // price=  [7,1,5,3,6,4]    6-1= 5

     
    // minimum price=1
    //  profit = 4

// we can the minimum price=1  on day 2   
   
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;
        int miniPrice=INT_MAX;
        for(int i=0;i<n;i++){
            miniPrice=min(miniPrice,prices[i]);
            ans= max(ans,prices[i]-miniPrice);
        }

        return ans;
    }
};