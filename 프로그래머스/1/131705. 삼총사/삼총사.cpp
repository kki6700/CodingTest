#include <string>
#include <vector>
using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int n = number.size();
    
    // 3중 for문으로 모든 조합 탐색
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (number[i] + number[j] + number[k] == 0) {
                    answer++;
                }
            }
        }
    }
    return answer;
}