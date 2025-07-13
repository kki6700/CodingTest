#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for (int num = left; num <= right; ++num) {
        // 제곱수면 홀수, 아니면 짝수
        if (sqrt(num) == (int)sqrt(num)) answer -= num;
        else answer += num;
    }
    return answer;
}