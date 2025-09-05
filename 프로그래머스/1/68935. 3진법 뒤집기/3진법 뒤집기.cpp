#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(int n) {
    string ternary = "";

    // 1. 10진수 -> 3진수 변환
    while (n > 0) {
        ternary += to_string(n % 3); // 나머지를 문자열로 추가
        n /= 3;
    }

    // ternary는 이미 뒤집힌 상태로 저장됨
    // 예: n=45 -> "0021"

    // 2. 뒤집힌 3진수 -> 10진수 변환
    int answer = 0;
    int power = 1;
    for (int i = ternary.size() - 1; i >= 0; i--) {
        answer += (ternary[i] - '0') * power;
        power *= 3;
    }

    return answer;
}