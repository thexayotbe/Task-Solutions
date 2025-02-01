class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> count;
        for (int num : arr) {
            count[num]++;
        }

        vector<int> unique;
        for (auto pair : count) {
            int count = pair.second;

            if (find(unique.begin(), unique.end(), count) != unique.end()) {
                return false;
            } else
                unique.push_back(count);
        }
        return true;
    }
};