#include <iostream>
using namespace std;
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n-1; i++) {
            if((nums[i] % 2 ==0 && nums[i+1] %2 == 0) || ((nums[i] % 2 !=0 && nums[i+1] %2 != 0))){
                return false;
            }
        }
        return true;
    }
};
int main() {
    Solution s;
    vector<int> nums = {4,3,1,6};
    cout << s.isArraySpecial(nums) << endl;
    return 0;
}
