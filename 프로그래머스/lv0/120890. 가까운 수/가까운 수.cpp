#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int abs_num = 100;
    sort(array.begin(), array.end());
    
    for(int num : array) {
        if (abs(n-num) < abs_num) {
            abs_num = abs(n-num);
            answer = num;
        }
    }
    return answer;
}