class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        const int n = nums.size();
        for(int i =0; i < n && count <=1; i++){
            if(nums[i] < nums[i-1]) count ++;
        }
        return (nums[0] >= nums.back() && count == 1) || count == 0;
    }
};