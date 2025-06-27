#include <string>
#include <vector>


using namespace std;

vector<int> solution(vector<int> arr) {
     if (arr.size() <= 1) {
        return {-1};
    }

    
    int minValue = arr[0];
    int minIndex = 0;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
    }
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++) {
        if (i != minIndex) {
            answer.push_back(arr[i]);
        }
    }

    return answer;
}