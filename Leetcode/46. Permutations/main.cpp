#include <iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> results;

        backtrack(nums, 0, results);
        return results;
    }
    private:
    void backtrack(vector<int> nums, int start, vector<vector<int>>& results) {
        if ( start == nums.size() ) {
            results.push_back(nums);
        }
        for ( int i = start; i < nums.size(); i++ ) {
            swap( nums[i], nums[start] );
            backtrack( nums, start + 1, results );
            swap( nums[i], nums[start] );
        }

    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3};
    s.permute(nums);
}