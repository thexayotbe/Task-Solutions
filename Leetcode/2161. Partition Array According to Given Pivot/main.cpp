#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less;
        vector<int> great;
        vector<int> mid;
        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            if(num < pivot) less.push_back(num);
            else if(num > pivot) great.push_back(num);
            else mid.push_back(num);
        }
        vector<int> res;
        for(int i : less) {
            res.push_back(i);
        }
        for(int i : mid) {
            res.push_back(i);
        } for(int i : great) {
            res.push_back(i);
        }

        return  res;
    }
};
int main() {
    Solution s;
    vector<int> nums = {9,12,5,10,14,3,10};
    int pivot = 10;
    s.pivotArray(nums, pivot);
    return 0;
}
