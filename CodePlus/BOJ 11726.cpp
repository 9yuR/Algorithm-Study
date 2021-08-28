#include <iostream>
#define DIV 10007

using namespace std;

int memo[1001];

//int fib(int n) {
//    if(n == 1) return memo[1];
//    if(n == 2) return memo[2];
//    if(memo[n] != 0) return memo[n];
//    return memo[n] = fib(n - 1) + fib(n - 2);
//}
int fib2(int n) {
    memo[1] = 1;
    memo[2] = 2;
    for(int i = 3; i <= n; i++){
        memo[i] = memo[i - 1] + memo[i - 2];
    }
    return memo[n];
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << fib2(n) % DIV << endl;
}
