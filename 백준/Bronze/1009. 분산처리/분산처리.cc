#include <iostream>

using namespace std;

int main() {

    int T;
    int a, b;
    int data;
    
    cin >> T;
    
    while (T--){
        cin >> a >> b;
        
        data = a % 10;
        for (int i = 1; i < b; i++)
            data = (data * a) % 10;
        
        if (data == 0) data = 10;
        
        cout << data << endl;
    }
    return 0;
}