#include <iostream>
using namespace std;

double score(double M, double N) {
    return (N / M) * 100;
}
double max(double a, double b) {
    if(a > b) return a;
    else return b;
}
int main(int argc, const char * argv[]) {
    int n;
    double maxi = 0, total = 0;
    cin >> n;
    double arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
    }
    for(int i = 0; i < n; i++){
        arr[i] = score(maxi, arr[i]);
        total += arr[i];
    }
    cout << total / n << endl;
    return 0;
}
