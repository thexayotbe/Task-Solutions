// Mamajonov Khayotbek DSAI - 02
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        unordered_set<int> unique;
        int dubl = 0;
        for(int i = 0; i< nums.size();i++){
            if(unique.find(nums[i]) != unique.end()){
                nums[i] = 101;
            }
            else unique.insert(nums[i]);
        }
        sort(nums.begin(), nums.end());
        return unique.size();
    }
};
int main() {
    Solution s;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << s.removeDuplicates(nums) << endl;
    return 0;
}
