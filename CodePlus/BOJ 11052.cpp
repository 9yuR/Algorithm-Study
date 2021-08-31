#include <iostream>

using namespace std;

long long dp[91] = {0};

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 1;
    for(int i = 3; i <= n; i++)
        dp[i] = dp[i - 2] + dp[i - 1];
    cout << dp[n] << endl;
    return 0;
}
