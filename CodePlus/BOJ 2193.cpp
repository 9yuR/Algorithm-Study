#include <iostream>

using namespace std;

int memo[12];

int OneTwoTh(int num) {
    memo[1] = 1;
    memo[2] = 2;
    memo[3] = 4;
    for(int i = 4; i <= num; i++)
        memo[i] = memo[i - 1] + memo[i - 2] + memo[i - 3];
    return memo[num];
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num;
        cout << OneTwoTh(num) << endl;
    }
}
