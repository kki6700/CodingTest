#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    std::string answer;
    answer.reserve(n); // 미리 n만큼 공간 확보(성능최적화용)
    for (int i = 0; i < n; ++i) {
        answer += (i % 2 == 0) ? "수" : "박";
    }
    return answer;
}