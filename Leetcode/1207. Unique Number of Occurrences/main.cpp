#include <iostream>
#include <unordered_map>
#include <algorithm>  // For std::find

using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> count;
        for (int num : arr) {
            count[num]++;
        }
        
        vector<int> unique;
        for(auto pair : count){
            int count = pair.second;
            
            if(find(unique.begin(), unique.end(), count) != unique.end()) {
                return false;
            }
            else unique.push_back(count);
        }
        return true;
    }
};
int main() {
    Solution s;
    vector<int> nums1 = {1,2,2,1,3};
    cout << s.uniqueOccurrences(nums1) << endl;

   
    return 0;
}
