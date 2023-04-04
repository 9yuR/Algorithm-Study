#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, B, C;
    long long result;
    cin >> N;
    result = N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    cin >> B >> C;
    
    for (int i = 0; i < A.size(); i++) {
        int left = A[i] - B;
        if (left > 0)
            result += left/C;
        if (left % C > 0)
            result++;
    }
    
    cout << result << '\n';
    
    return 0;
}