#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    size_t start = 0; 
    char  x = s[start];
    int same = 0;
    int diff = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == x) ++same;
        else           ++diff;

         if (same == diff) {
            ++answer;
            if (i + 1 < s.size()) x = s[i + 1];
            same = diff = 0;
        }
        
    }
    if (same != 0 || diff != 0) ++answer;
    return answer;
    
    return answer;
}