class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        vector<int>ans;
        int carry=1;

        while(n>=0)
        {
            int digit=digits[n]+carry;
            int rem=digit%10;
            ans.push_back(rem);
            carry=digit/10;

            n--;
        }

        if(carry)
        ans.push_back(carry);

        int start=0,end=ans.size()-1;
        while(start<end){
            swap(ans[start],ans[end]);
            start++,end--;
        }

        return ans;
    }
};