class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        unordered_map<int, int> permutations;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int mult = nums[i] * nums[j];
                permutations[mult]++;
            }
        }

        for (auto pair : permutations) {
            int count = pair.second;
            if (count > 1) {
                res += count * (count - 1) * 4;
            }
        }

        return res;
    }
};