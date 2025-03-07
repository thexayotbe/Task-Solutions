#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        if (left > right) return {-1, -1};

        vector<bool> isPrime(right + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i <= right; i++) {
            if (isPrime[i]) {
                for (int j = i + i; j <= right; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        vector<int> primes;
        for (int i = left; i <= right; i++) {
            if (isPrime[i]) primes.push_back(i);
        }

        if (primes.size() < 2) return {-1, -1};

        int midDiff = INT_MAX, num1 = -1, num2 = -1;

        for (size_t i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if (diff < midDiff) {
                midDiff = diff;
                num1 = primes[i - 1];
                num2 = primes[i];
            }
        }
        return {num1, num2};
    }
};

int main() {
    Solution s;
    int left = 10, right = 19;
    s.closestPrimes(left, right);
    return 0;
}
