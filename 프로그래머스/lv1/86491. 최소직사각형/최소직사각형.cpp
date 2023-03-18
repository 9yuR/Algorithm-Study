#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int a = 0, b = 0;
    for (int i = 0; i < sizes.size(); i++)
        sort(sizes[i].begin(), sizes[i].end());
    
    for (int i = 0; i < sizes.size(); i++)
        a = max(a, sizes[i][0]), b = max(b, sizes[i][1]);
    return a * b;
}