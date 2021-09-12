#include <iostream>
using namespace std;

int dp[101][10];
int B=1000000000;

void sum_of_dp(int N){
    long sum = 0;
    for(int i = 0; i < 10; i++)
        sum += dp[N][i];
    cout << sum % B << endl;
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    for(int i = 1; i <= 10; i++ ){
        dp[1][i] = 1;
    }
    for(int i = 2; i <= N; i++){
        for(int j = 0; j < 10; j++){
            if( j == 0 )
                dp[i][j] = (dp[i - 1][j + 1]) % B;
            else if( j == 9 )
                dp[i][j] = (dp[i - 1][j - 1]) % B;
            else
                dp[i][j] = (dp[i - 1][j + 1] + dp[i - 1][j - 1]) % B;
        }
    }
    sum_of_dp(N);
    return 0;
}
