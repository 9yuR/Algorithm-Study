#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    int dp[1000001];
    cin >> x;
    dp[1] = 0;
    for(int i = 2; i <= x; i++){
        dp[i] = dp[i - 1] + 1;
        if(i % 2 == 0 && dp[i] > dp[i/2] + 1)
            dp[i] = dp[i/2] + 1;
        if(i % 3 == 0 && dp[i] > dp[i/3] + 1)
            dp[i] = dp[i/3] + 1;
    }
    cout << dp[x] << endl;
}
