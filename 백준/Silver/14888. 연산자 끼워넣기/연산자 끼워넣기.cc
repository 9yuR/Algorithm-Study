#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 11
using namespace std;

int N;
int numbers[MAX];
int op[4];

int maximum = -100000001;
int minimum = 100000001;

void getAnswer(int result, int idx) {
    if (idx == N) {
        maximum = max(result, maximum);
        minimum = min(result, minimum);
        return;
    }
    for (int i = 0; i < 4; i++) {
        if(op[i] > 0) {
            op[i]--;
            if (i == 0)
                getAnswer(result + numbers[idx], idx+1);
            else if (i == 1)
                getAnswer(result - numbers[idx], idx+1);
            else if (i == 2)
                getAnswer(result * numbers[idx], idx+1);
            else
                getAnswer(result / numbers[idx], idx+1);
            op[i]++;
        }
    }
    return;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> numbers[i];
    cin >> op[0] >> op[1] >> op[2] >> op[3];
    
    getAnswer(numbers[0], 1);
    
    cout << maximum << '\n' << minimum << '\n';
    return 0;
}
