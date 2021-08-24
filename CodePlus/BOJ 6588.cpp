#include <iostream>
#include <cmath>
using namespace std;

bool Pcheck(int num){
    int i = 3;
    int sqrtNum = floor(sqrt(num));
    if(num == 3)
        return true;
    while(i <= sqrtNum){
        if(num % i == 0) return false;
        i+=2;
    }
    return true;
};

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int a, b;
    while(1){
        cin >> n;
        if(n == 0) break;
        a = 0;
        int i = 3;
        while(i < n){
            if(Pcheck(i) && Pcheck(n - i)){
                a = i;
                b = n - i;
                cout << n << " = " << a << " + " << b << "\n";
                break;
            }
            i += 2;
        }
        if(a == 0)
            cout << "Goldbach's conjecture is wrong." << endl;
    }
    return 0;
}

