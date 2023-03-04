#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int totals = total;
    while(1) {
        int sum = 0;
        int n = totals;
        for (int i = 0; i < num; i++) {
            sum += n;
            n--;
        }
        if (sum == total) {
            for (int i = 0; i < num; i++)
                answer.push_back(totals--);
            break;
        }
        totals--;
    }
    sort(answer.begin(), answer.end());
    return answer;
}