#include <iostream>
#include <cmath>
using namespace std;



int64_t double_factorial(int64_t y) {
    if (y <= 0) {
        return 1;
    } else if ((y % 2) == 0) {
        int64_t res = 1;
        for (long i = 2; i <= y; i += 2) {
            res *= i;
        }
        return res;
    } else {
        int64_t res = 1;
        for (long i = 1; i <= y; i += 2) {
            res *= i;
        }
        return res;
    }
}



long double t(long double x) {
    long double sum1 = 0, sum2 = 0;

    for (int i = 0; i <= 20; i += 2) {
        sum1 += (pow(x, (i + 1))) / (double_factorial(i + 1));
        sum2 += (pow(x, i)) / (double_factorial(i));
    }

    return (sum1 / sum2);

}



int main(void) {

    long double y, res;

    cin >> y;

    res = ((7 * t(0.25)) + (2 * t(1 + y))) / (6 - (t(pow(y, 2) - 1)));

    cout << res << endl;

    return 0;
}