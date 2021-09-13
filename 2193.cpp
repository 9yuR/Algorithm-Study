#include <iostream>
using namespace std;

long dp[91][2];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    dp[1][1] = dp[2][0] = 1;
    dp[1][0] = dp[2][1] = 0;
    for(int i = 2; i <= N; i++ ){
        for(int j = 0; j <= 1; j++){
            if( j == 1 )
                dp[i][j] = dp[i - 1][0];
            else
                dp[i][j] = dp[i - 1][0] + dp[i - 1][1];
        }
    }
    cout << dp[N][0] + dp[N][1] << endl;
    return 0;
}
