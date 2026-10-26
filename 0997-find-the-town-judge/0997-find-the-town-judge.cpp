
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> inDeg(n + 1, 0);
        vector<int> outDeg(n + 1, 0);

        for (auto &t : trust) {
            outDeg[t[0]]++;
            inDeg[t[1]]++;
        }

        for (int i = 1; i <= n; i++) {
            if (inDeg[i] == n - 1 && outDeg[i] == 0) {
                return i;
            }
        }

        return -1;
    }
};
