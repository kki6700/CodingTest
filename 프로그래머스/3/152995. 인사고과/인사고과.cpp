#include <string>
#include <vector>

using namespace std;
void quickSort(vector<vector<int>>& v, int L, int R) {
    if (L >= R) return;
    int i = L, j = R;
    vector<int> pivot = v[(L + R) / 2];

    auto cmp = [](const vector<int>& a, const vector<int>& b) {
        if (a[0] != b[0]) return a[0] > b[0];  
        return a[1] < b[1];                    
    };

    while (i <= j) {
        while (cmp(v[i], pivot)) ++i;
        while (cmp(pivot, v[j])) --j;
        if (i <= j) {
            vector<int> tmp = v[i];
            v[i] = v[j];
            v[j] = tmp;
            ++i; --j;
        }
    }
    if (L < j) quickSort(v, L, j);
    if (i < R) quickSort(v, i, R);
}

int solution(vector<vector<int>> scores) {
    const int n = (int)scores.size();

    
    int wonhoSum = scores[0][0] + scores[0][1];
    int wonhoA = scores[0][0], wonhoB = scores[0][1];

    
    quickSort(scores, 0, n - 1);

    int maxSecond = -1;
    bool wonhoOut = false;
    vector<int> aliveSums;
    aliveSums.reserve(n);

    for (int i = 0; i < n; ++i) {
        int a = scores[i][0];
        int b = scores[i][1];

       
        if (b < maxSecond) {
            if (a == wonhoA && b == wonhoB) wonhoOut = true;
            continue;
        }

        if (b > maxSecond) maxSecond = b;
        aliveSums.push_back(a + b);
    }

    if (wonhoOut) return -1;


    int rank = 1;
    for (int sum : aliveSums)
        if (sum > wonhoSum) ++rank;

    return rank;
}