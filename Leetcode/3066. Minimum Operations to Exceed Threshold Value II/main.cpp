// Khayotbek Mamajonov
// DSAI - 02
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        priority_queue<long long, vector<long long>, greater<>> pq(nums.begin(),
                                                                   nums.end());

        while (pq.top() < k) {
            long long x = pq.top(); pq.pop();
            long long y = pq.top(); pq.pop();
            pq.push(2*x+y);
            count++;
            
        }
        return count;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,11,10,1,3};
    int k = 10;
    cout << s.minOperations(nums,k) << endl;
    return 0;
}
