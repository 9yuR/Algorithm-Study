#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string let;
    cin >> let;
    
    int n, cnt = 0;
    cin >> n;
    vector<string> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        vec[i] += vec[i];
    }
    
    for (int i = 0; i < n; i++)
        if(vec[i].find(let) != string::npos) cnt++;
    
    cout << cnt << endl;
    
    return 0;
}
