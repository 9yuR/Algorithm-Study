#include <iostream>
#include <string>
#include <vector>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main (void) {
    string str;
    vector<char> v;
    
    cin >> str;
    
    for (int i = 0; i < str.size(); i++)
        v.push_back(str[i]);
    
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++)
            if (v[i] < v[j]) swap(v[i], v[j]);
    }
    
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it;
    cout << endl;
    
    return 0;
}