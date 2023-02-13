#include <iostream>

using namespace std;

int main (void) {
    int arr[101][101] = {0, };
    int N, x, y, count = 0;
    cin >> N;
    
    while (N--) {
        cin >> x >> y;
        for (int i = y; i < y+10; i++) {
            for (int j = x; j < x+10; j++) {
                if (!arr[i][j]) {
                    arr[i][j]++;
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}