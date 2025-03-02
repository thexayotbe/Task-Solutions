class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        unordered_map<int, int> m;
        vector<vector<int>> res;
        for (int i = 0; i < nums1.size(); i++) {
            m[nums1[i][0]] = nums1[i][1];
        }
        for (int i = 0; i < nums2.size(); i++) {
            m[nums2[i][0]] += nums2[i][1];
        }
        for (auto it : m) {
            vector<int> v;
            int index = it.first;
            int value = it.second;
            v.push_back(index);
            v.push_back(value);
            res.push_back(v);
        }
        sort(res.begin(), res.end(),
             [](const vector<int>& v1, const vector<int>& v2) {
                 return v1[0] < v2[0];
             });

        return res;
    }
};