#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    int p1[5]  = {1,2,3,4,5};
    int p2[8]  = {2,1,2,3,2,4,2,5};
    int p3[10] = {3,3,1,1,2,2,4,4,5,5};

    int c1 = 0, c2 = 0, c3 = 0;

    
    for (int i = 0; i < (int)answers.size(); ++i) {
        int a = answers[i];
        if (a == p1[i % 5])  ++c1;
        if (a == p2[i % 8])  ++c2;
        if (a == p3[i % 10]) ++c3;
    }

    
    int mx = c1;
    if (mx < c2) mx = c2;
    if (mx < c3) mx = c3;

    
    vector<int> answer;
    if (c1 == mx) answer.push_back(1);
    if (c2 == mx) answer.push_back(2);
    if (c3 == mx) answer.push_back(3);

    return answer;
}