#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int pLen = p.size();
    long long pNum = stoll(p);

    vector<string> subStrings;

   
    for (int i = 0; i <= t.size() - pLen; i++) {
        subStrings.push_back(t.substr(i, pLen));
    }

    
    for (const string& sub : subStrings) {
        long long subNum = stoll(sub); 
        if (subNum <= pNum) {
            answer++;
        }
    }

    return answer;
}