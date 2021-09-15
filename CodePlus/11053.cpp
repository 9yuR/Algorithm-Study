#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001];
int A[1001];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, result = 0;
    
    cin >> N;
    for(int i = 1; i <= N; i++)
        cin >> A[i];
    
    for(int i = 1; i <= N; i++){
        dp[i] = 1;
        for(int j = 1; j <= i; j++){
            if(A[i] > A[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        result = max(result, dp[i]);
    }
    cout << result << endl;
    return 0;
}
