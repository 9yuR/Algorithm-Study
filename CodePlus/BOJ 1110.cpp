#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int num, N, a, b, cycle = 0;
    
    cin >> num;
    N = num;
    do{
        if(N < 10)
            a = 0;
        else
            a = N / 10;
        b = N % 10;
        N = b * 10 + ((a + b) % 10);
        cycle++;
    } while(N != num);
    
    cout << cycle << endl;
    
    return 0;
}
