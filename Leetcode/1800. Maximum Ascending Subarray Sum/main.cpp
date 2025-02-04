#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];
        for(int i = 1; i< nums.size(); i++){
            if(nums[i] > nums[i-1]){
                currentSum+= nums[i];
            }
            else {
                currentSum = nums[i];
            }
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    }
};



int main() {
    Solution s;
    vector<int> nums = {10,20,30,5,10,50};
    cout << s.longestMonotonicSubarray(nums) << endl;
    return 0;
}
