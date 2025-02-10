class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            unordered_set<int> unique;
            for (int i = 0; i < nums.size(); i++) {
                if (unique.find(nums[i]) != unique.end()) {
                    nums[i] = 101;
                } else
                    unique.insert(nums[i]);
            }
            sort(nums.begin(), nums.end());
            return unique.size();
        }
    };