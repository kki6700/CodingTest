#include <string>
#include <vector>

using namespace std;

int solution(string word) {
 
    char v[5] = {'A','E','I','O','U'};

   
    std::vector<std::string> st;
    st.push_back("");           

    int idx = 0;              

    while (!st.empty()) {
        std::string s = st.back();
        st.pop_back();

        if (!s.empty()) {     
            idx++;
            if (s == word) return idx;
        }

        if (s.size() == 5) continue;  

        
        for (int i = 4; i >= 0; --i) {
            std::string t = s;
            t += v[i];
            st.push_back(t);
        }
    }
    return -1; 
}