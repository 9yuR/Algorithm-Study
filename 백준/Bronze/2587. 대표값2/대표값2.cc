#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    vector<int> arr(5);
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << sum / 5 << endl;
    cout << arr.at(2) << endl;
    return 0;
}