#include <iostream>

using namespace std;

int main() {

    int T;
    int n, count;
    
    cin >> T;
    
    while (T--){
        cin >> n;
        count = 0;
        
        while(n > 0) {
            if (n % 2 == 1) cout << count << " ";
        
            n /= 2;
            count++;
        }
        cout << endl;
    }
    
    return 0;
}