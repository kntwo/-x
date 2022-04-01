class Solution {
public:
    int mySqrt(int x) {
        double x1, x2 = 23;
        do {
            x1 = x2;
            x2 = (x1 + x / x1) / 2.0;
        } while (fabs(x2 - x1) >= 1e-5);
        return (int)x1;
    }
};