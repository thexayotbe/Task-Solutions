class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer(2);
        unordered_set<int> set1;
        unordered_set<int> set2;
        
        for(int i : nums1){
            set1.insert(i);
        }
        for(int i : nums2){
            set2.insert(i);
        }
        
        for(int num : set1){
            if(set2.find(num) == set2.end()){
                answer[0].push_back(num);
            }
        }
        
        for(int num : set2){
            if(set1.find(num) == set1.end()){
                answer[1].push_back(num);
            }
        }
        return answer;
    }
    
};
