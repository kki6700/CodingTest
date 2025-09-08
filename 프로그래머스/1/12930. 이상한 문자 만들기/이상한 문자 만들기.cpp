#include <string>
#include <vector>
#include <cctype> // toupper, tolower 사용
using namespace std;

string solution(string s) {
    vector<char> result;           // 결과를 담을 vector
    result.reserve(s.size());      // 미리 공간 확보

    int idxInWord = 0; // 단어 내 인덱스 (0부터 시작)

    for (char c : s) {
        if (c == ' ') {
            // 공백은 그대로 넣고, 단어 인덱스는 초기화
            result.push_back(' ');
            idxInWord = 0;
        } else {
            // 짝수 위치 -> 대문자, 홀수 위치 -> 소문자
            if (idxInWord % 2 == 0)
                result.push_back(toupper(static_cast<unsigned char>(c)));
            else
                result.push_back(tolower(static_cast<unsigned char>(c)));

            idxInWord++;
        }
    }

    // vector<char> -> string 변환
    string answer(result.begin(), result.end());
    return answer;
}