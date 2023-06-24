#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string, int> num;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    int m, n;
    cin >> m >> n;
    
    for (int i = m; i <= n; i++) {
        string s;
        if (i < 10) {
            s = arr[i];
        }
        else {
            s = arr[i / 10] + " " + arr[i % 10];
        }
        num[s] = i;
    }
    
    int cnt = 0;
    for (auto it : num) {
        cout << it.second << ' ';
        cnt++;
        if (cnt % 10 == 0)
            cout << endl;
    }

    return 0;
}
