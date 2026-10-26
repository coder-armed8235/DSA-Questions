
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int v = edges.size() + 1;
        vector<int> inDeg(v + 1, 0);

        for (int i = 0; i < edges.size(); i++) {
            inDeg[edges[i][0]]++;
            inDeg[edges[i][1]]++;
        }

        int n = edges.size();

        for (int i = 1; i <= v; i++) {
            if (inDeg[i] == n) {
                return i;
            }
        }

        return -1;
    }
};
