#include <string>
#include <algorithm>


class Solution {
public:
    std::string reverseString(std::string s) {
        std::string ret = s;
        std::copy(s.rbegin(), s.rend(), ret.begin());
        return ret;
    }
};