class Solution {
public:

//     [3,0,1]   first 

// if the size is 3 then the arr must contain 1 2 3  
//    2*sum of n/2
//   we another formmula for calculating n natural n*(n+1)/2 2x in sum n
//     3*4/2
//     12/2=6

//    we have n=10
//    10*11/2   110/2= 55 this is the sum of 10 natural number;
//  we will calculate thr sum of n element  n=3  sum will be 6
// and the sum of array will be 4   we will return total present - sum of total
//    6-4 =2

//   [1,2,3] size of n= 6  we have given array sum=6  0 is missing

    int missingNumber(vector<int>& nums) {
        int arrSum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            arrSum+=nums[i];
        }

        int totalSum=n*(n+1)/2;

        return totalSum-arrSum;
    }
};