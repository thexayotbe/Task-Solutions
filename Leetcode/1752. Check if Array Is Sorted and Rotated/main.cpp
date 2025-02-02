#include <iostream>
#include <unordered_map>
#include <algorithm>  // For std::find

using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        const int n = nums.size();
        for(int i =1; i < n && count <=1; i++){
            if(nums[i] < nums[i-1]) count ++;
        }
        return (nums[0] >= nums.back() && count == 1) || count == 0;
    }
};
int main() {
    Solution s;
    vector<int> nums1 = {1,2,3};
    cout << s.check(nums1) << endl;

   
    return 0;
}
