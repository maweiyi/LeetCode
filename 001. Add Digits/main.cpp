class Solution {
public:
    int addDigits(int a) {
        if (a % 9 == 0&&a != 0) {
            return 9;
        } else {
           return a % 9;
        }
    }
};