#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    
    bool check[10] = {false}; 
    for (int num : numbers) {
        check[num] = true; 
    }

    int answer = 0;
    for (int i = 0; i <= 9; i++) {
        if (!check[i]) answer += i; 
    }
    
    
    return answer;
    
    
}