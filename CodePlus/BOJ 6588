#include <iostream>
using namespace std;

bool Pcheck(int num){
    int i = 3;
    if(num == 3)
        return true;
    while(i < num){
        if(num % i == 0)
            return false;
        i += 2;
    }
    return true;
};

int main(void) {
    int n = 0;
    int a, b;
    while( n != 0 ){
        cin >> n;
        a = 0;
        for(int i = 3; i <= n; i++){
            if(Pcheck(i) && Pcheck(n - i)){
                a = i;
                b = n - i;
                cout << n << " = " << a << " + " << b << endl;
                break;
            }
        }
        if(a == 0)
            cout << "Goldbach's conjecture is wrong." << endl;
    }
    return 0;
}
