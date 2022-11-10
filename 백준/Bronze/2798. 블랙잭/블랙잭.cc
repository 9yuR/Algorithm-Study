#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int N, M, temp, sum = 0;
    cin >> N >> M;
    vector<int> card(N);
    for (int i = 0; i < N ; i++)
        cin >> card[i];
    for (int i = 0; i < N-2 ; i++) {
        for (int j = i + 1; j < N-1; j++) {
            for (int k = j + 1; k < N; k++){
                temp = card[i] + card[j] + card[k];
                if (temp > sum && temp <= M)
                    sum = temp;
                if (M == sum) break;
            }
            if (M == sum) break;
        }
        if (M == sum) break;
    }
    cout << sum << endl;
    return 0;
}