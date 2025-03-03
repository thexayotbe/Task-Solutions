#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less;
        vector<int> great;
        int same = 0;
        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            if(num < pivot) less.push_back(num);
            else if(num > pivot) great.push_back(num);
            else same++;
        }
        while (same--) less.push_back(pivot);
        for(int i : great) less.push_back(i);

        return  less;
    }
};
int main() {
    Solution s;
    vector<int> nums = {9,12,5,10,14,3,10};
    int pivot = 10;
    s.pivotArray(nums, pivot);
    return 0;
}
