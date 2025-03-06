class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int> > &grid) {
        int repeated = -1;
        int missing = -1;
        int n = grid.size();
        int size = n * n;
        vector<int> freq(size + 1, 0);

        for (const auto &row: grid) {
            for (int num: row) {
                freq[num]++;
            }
        }

        for (int i = 1; i <= size; i++) {
            if (freq[i] == 2) repeated = i;
            if (freq[i] == 0) missing = i;
        }
        return {repeated, missing};
    }
};