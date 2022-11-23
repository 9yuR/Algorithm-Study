#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main (void) {
    int n, k;
    cin >> n >> k;
    int arr[n];
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j]) swap(arr[i], arr[j]);
    }
    
    cout << arr[n-k] << endl;
    
    return 0;
}