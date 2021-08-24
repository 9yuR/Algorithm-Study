#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    
    switch (s.length() % 3) {
        case 1:
            cout << s[0];
            break;
        case 2:
            cout << 2 * (s[0] - '0') + (s[1] - '0');
            break;
        default:
            break;
    }
    for(int i = s.length() % 3; i < s.length(); i += 3){
        cout << 4 * (s[i] - '0') + 2 * (s[i + 1] - '0') + (s[i + 2] - '0');
    }
    cout << endl;
    return 0;
}
