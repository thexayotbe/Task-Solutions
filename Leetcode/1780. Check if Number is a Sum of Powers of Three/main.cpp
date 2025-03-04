#include <iostream>
using namespace  std;
class Solution {
public:
    bool checkPowersOfThree(int n) {
        string converter = convert(n);
        for(char ch : converter){
            if(ch == '2') return false;
        }
        return true;
    }
    string convert(int decimalNumber){
        if(decimalNumber == 0) return  "0";

        stack<int> ternaryDig;
        while(decimalNumber > 0){
            ternaryDig.push(decimalNumber % 3);
            decimalNumber /=3;
        }

        string ternaryNum = "";

        while (!ternaryDig.empty()){
            ternaryNum += to_string(ternaryDig.top());
            ternaryDig.pop();
        }
        return ternaryNum;
    }
};

int main() {
    Solution s;
    std::cout << s.checkPowersOfThree(12)  << std::endl;
    return 0;
}
