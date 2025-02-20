class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        set<string> strN(nums.begin(), nums.end());
        int n = nums[0].size();
        return generate("", n, 0, strN);
    }
    string generate(string current, int n, int pos, set<string> strN) {
        if (pos == n) {
            if (strN.find(current) == strN.end()) {
                return current;
            }
            return "";
        }
        string r = generate(current + "0", n, pos + 1, strN);
        if (!r.empty()) {
            return r;
        }
        return generate(current + "1", n, pos + 1, strN);
    }
};
