#include <iostream>
#define DIV 10007

using namespace std;

int memo[1001];

int twoXn(int n) {
    memo[1] = 1;
    memo[2] = 3;
    for(int i = 3; i <= n; i++){
        memo[i] = (memo[i - 1] + 2 * memo[i - 2]) % DIV;
    }
    return memo[n];
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << twoXn(n) << endl;
}
