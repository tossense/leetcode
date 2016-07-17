

class Solution {
public:
    bool canWinNim(int n) {
        if(n <= 0) return false;
        if(n > 0 && n % 4 != 0) return true;
        return false;
    }
};