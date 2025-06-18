#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    string nc (phone_number.length() - 4, '*');
    answer = phone_number.replace(0,phone_number.length() - 4, nc);
    
    
    return answer;
}