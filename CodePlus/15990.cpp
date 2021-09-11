#include <iostream>
using namespace std;

long long dp[100001][4];
int B=1000000009;

void solve(void) {
    dp[1][1] = dp[2][2] = dp[3][3] = dp[3][2] = dp[3][1] = 1;
    for(int i = 4; i < 100001; i++){
        dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % B;
        dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % B;
        dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % B;
    }
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T, n;
    cin >> T;
    solve();
    for(int i = 0; i < T; i++){
        cin >> n;
        cout << (dp[n][1] + dp[n][2] + dp[n][3]) % B << endl;
    }
    return 0;
}
