#include <cmath>

using namespace std;

long long solution(long long n) {
    long long x = (long long)sqrt(n);  // 제곱근을 정수로 자름

    if (x * x == n) {
        return (x + 1) * (x + 1);
    } else {
        return -1;
    }
}
