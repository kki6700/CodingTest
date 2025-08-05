#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    int total = brown + yellow;
    for (int height = 3; height <= total / height; ++height) {
        if (total % height == 0) {
            int width = total / height;
            if (width < height) continue;
            if ((width - 2) * (height - 2) == yellow) {
                return {width, height};
            }
        }
    }
    return {};
}