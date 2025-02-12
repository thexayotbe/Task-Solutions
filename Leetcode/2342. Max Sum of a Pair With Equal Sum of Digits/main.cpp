// Khayotbek Mamajonov
// DSAI - 02
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        size_t n = nums.size();
        int maxNumber = 0;
        vector<int> sums;
        for(int i = 0; i < nums.size(); i++){
            sums.push_back(sumOfDig(nums[i]));
        }
       
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j) continue;
                if(sums[i] == sums[j]){
                    int sum = nums[i] + nums[j];
                    maxNumber = max(maxNumber, sum);
                }
            }
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
