#include <string>
#include <vector>
#include <cctype> 
using namespace std;

string solution(string s) {
    vector<char> result;           
    result.reserve(s.size());      

    int idxInWord = 0;

    for (char c : s) {
        if (c == ' ') {
            result.push_back(' ');
            idxInWord = 0;
        } else {
            if (idxInWord % 2 == 0)
                result.push_back(toupper(static_cast<unsigned char>(c)));
            else
                result.push_back(tolower(static_cast<unsigned char>(c)));

            idxInWord++;
        }
    }

    string answer(result.begin(), result.end());
    return answer;
}