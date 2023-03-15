#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer(1, 1);
    int day, idx = 0, newday;
    day = (99 - progresses[0]) / speeds[0] + 1;
    for(int i = 1; i < progresses.size(); i++) {
        newday = (99 - progresses[i]) / speeds[i] + 1;
        
        if (day >= newday)
            answer[idx] += 1;
        else {
            day = newday;
            answer.push_back(1);
            idx++;
        }
    }
    return answer;
}