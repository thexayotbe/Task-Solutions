class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B) {
        int len = A.size();
        vector<bool> seenA(A.size(), false);
        vector<bool> seenB(B.size(), false);
        vector<int> C (len, 0);

        int count = 0;

        for (int i = 0; i < len; i++) {
            seenA[A[i]] = true;
            seenB[B[i]] = true;

            if (seenA[B[i]]) {
                count++;
            }
            if (seenB[A[i]]) {
                count++;
            }
            if(A[i] == B[i]) count--;

            C[i] = count;
        }
        return C;
    }
};