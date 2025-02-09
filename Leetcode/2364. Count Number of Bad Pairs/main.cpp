// Mamajonov Khayotbek DSAI - 02
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        long long goodPairs = 0, n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int key = nums[i] - i;
            goodPairs += freq[key];
            freq[key]++;
        }
        
        return (n * (n - 1)) / 2 - goodPairs;
    }
};
int main() {
    Solution s;
    int limit = 4;
    vector<int>queries = {4,1,3,3};
    cout << s.countBadPairs(queries) << endl;
    return 0;
}
