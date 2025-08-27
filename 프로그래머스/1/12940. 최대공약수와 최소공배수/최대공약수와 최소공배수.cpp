#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) 
{
    vector<int> answer;

    
    int a = n;
    int b = m;
    while (b != 0) 
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    int gcd = a;                  
    int lcm = (n / gcd) * m;     

    answer.push_back(gcd);
    answer.push_back(lcm);

    return answer;
}