class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size(),m=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int first=0,second=0;
        int count=0;
        while(first<n && second<m){
            if(s[second]>=g[first]){
                count++;
                second++,first++;
            }
            else{
                second++;
            }
        }

        return count;
    }
};