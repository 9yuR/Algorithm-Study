#include <iostream>
#include <algorithm>
using namespace std;

int dp[10001] = {0};
int p[1001] = {0};

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> p[i + 1];
    for(int i = 1; i <= n; i++) {
        dp[i] = p[i];
        for(int j = 1; j < i; j++){
            dp[i] = min(dp[i], dp[j] + p[i - j]);
        }
    }
    cout << dp[n] << endl;
    return 0;
}
