/* Clear explanation can be found at https://oj.leetcode.com/discuss/6632/challenge-me-thx */
class Solution {
public:
    int singleNumber(int A[], int n) {
        int ones = 0, twos = 0;
        for (int i = 0; i < n; ++i) {
            ones = (ones ^ A[i]) & ~twos;
            twos = (twos ^ A[i]) & ~ones;
        }
        return ones;
    }
};