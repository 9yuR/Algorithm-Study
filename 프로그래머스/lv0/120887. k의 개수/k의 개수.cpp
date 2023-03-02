#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for (int idx = i; idx <= j; idx++) {
        int a = idx;
        while(a) {
            if (a % 10 == k)
                answer++;
            a /= 10;
        }
    }
    return answer;
}