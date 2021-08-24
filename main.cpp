#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while (b > 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, S, A;
    int GCD;
    vector<int> vec;
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> A;
        vec.push_back(abs(A-S));
    }
    GCD = gcd(vec[0], vec[1]);
    for (int i = 2; i < vec.size(); i++) {
        if (GCD == 1)
            break;
        GCD = gcd(GCD, vec[i]);
    }
    cout << GCD << endl;
    return 0;
}
