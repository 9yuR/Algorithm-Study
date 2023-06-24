#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s, pn = "I";
    
    int n, m;
    cin >> n >> m;
    cin >> s;
    
    for (int i = 0; i < n; i++)
        pn += "OI";
    
    int start, end;
    for (int i = 0; i < m; i++) {
        if (s[i] == 'I') {
            start = i;
            break;
        }
    }
    int cnt = 0;
    int result = 0;
    for (int i = start; i < m; i++) {
        for (int j = 0; j < pn.size(); j++) {
            if (s[i+j] == pn[j]) {
                cnt++;
            }
        }
        if (cnt == pn.size()) result++;
        cnt = 0;
    }
    
    cout << result << endl;
    return 0;
}
