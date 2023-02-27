#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for (int i = 0; i < s2.size(); i++) {
        for (int j = 0; j < s1.size(); j++) {
            if (!s2[i].compare(s1[j])) answer++;
        }
    }
    return answer;
}