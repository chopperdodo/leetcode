/* Solution from https://oj.leetcode.com/discuss/9405/the-shortest-ac-code */
class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        for (char c = *p; c != 0; ++s, c = *p) {
            if (*(p + 1) != '*')
                p++;
            else if (isMatch(s, p+2))
                return true;
            if ((*s == '\0') || ((c != '.') && (c != *s)) )
                return false;
        }
        return *s == '\0';
    }
};