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
            sum += n % 10;  
            n /= 10;        
        }
        return sum;
    }

    
};
