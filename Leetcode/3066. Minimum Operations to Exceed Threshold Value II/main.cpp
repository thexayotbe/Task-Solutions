class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            int count = 0;
            priority_queue<long long, vector<long long>, greater<>> pq(nums.begin(),
                                                                       nums.end());
    
            while (pq.top() < k) {
                long long x = pq.top();
                pq.pop();
                long long y = pq.top();
                pq.pop();
                int r = min(x, y) * 2 + max(x, y);
                pq.push(2 * x + y);
                count++;
            }
            return count;
        }
    };