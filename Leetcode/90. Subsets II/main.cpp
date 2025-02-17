#include <iostream>
using namespace  std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        sort(nums.begin(), nums.end());

        backtrack(nums,0, current, result);
        return result;
    }
private:
    void backtrack(vector<int>& nums, int start, vector<int> current, vector<vector<int>>& result) {
        result.push_back(current);
        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1]) {
                continue;
            }
            current.push_back(nums[i]);
            backtrack(nums, i + 1, current, result);

            current.pop_back();
        }
    }
};


int main () {
    Solution solution;
    string const t = "AAB";
    vector<int> v = {1,2,2};
    cout << solution.subsetsWithDup(v) << endl;
    return 0;
};