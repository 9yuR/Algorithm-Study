#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2);
    for (string move : keyinput) {
        if (move == "left") {
            if (answer[0] == -((board[0] - 1) / 2))
                continue;
            answer[0] -= 1;
        }
        else if (move == "right") {
            if (answer[0] == ((board[0] - 1) / 2))
                continue;
            answer[0] += 1;
        }
        else if (move == "up") {
            if (answer[1] == ((board[1] - 1) / 2))
                continue;
            answer[1] += 1;   
        }
        else if (move == "down") {
            if (answer[1] == -((board[1] - 1) / 2))
                continue;
            answer[1] -= 1;
        }
    }
    return answer;
}