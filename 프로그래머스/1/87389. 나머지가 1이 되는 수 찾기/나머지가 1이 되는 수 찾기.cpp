#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int x = 1;
    while (n > 0){
        
        if (n % x == 1){
            
            answer = x;
            break;
        }
        else{
            
            x++;
        }
        
    }
    
    return answer;
}