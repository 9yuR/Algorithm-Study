#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string A, string B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    if (!A.compare(B))
        return 1;
    else
        return 0;
}