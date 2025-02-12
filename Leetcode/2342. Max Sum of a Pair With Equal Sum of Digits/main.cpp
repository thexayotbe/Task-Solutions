// Khayotbek Mamajonov
// DSAI - 02
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> digitsSum;
        int maxNumber = -1;
        for(int i : nums) {
            int sumDig = sumOfDig(i);
            if(digitsSum.count(sumDig)){
                maxNumber = max(maxNumber, i + digitsSum[sumDig]);
            }
            digitsSum[sumDig] = max(i,digitsSum[sumDig]);
        }
        return maxNumber;
    }
    
    
private:
    int sumOfDig(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;  // Add the last digit of n to the sum
            n /= 10;         // Remove the last digit from n
        }
        return sum;
    }

    
};
int main() {
    Solution s;
    vector<int> nums = {18,43,36,13,7};
    cout << s.maximumSum(nums) << endl;
    return 0;
}
