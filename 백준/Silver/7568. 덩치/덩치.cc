#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(int argc, char *argv[]) {
    int N, k;
    cin >> N;
    vector<pair<int, int>> bulk(N);

    for (int i = 0; i < N; i++) {
        cin >> bulk[i].first >> bulk[i].second;
    }
    
    for (int i = 0; i < N; i++) {
        k = 1;
        for (int j = 0; j < N; j++)
            if (bulk[i].first < bulk[j].first && bulk[i].second < bulk[j].second)
                k++;
        cout << k << " ";
    }

    return 0;
}