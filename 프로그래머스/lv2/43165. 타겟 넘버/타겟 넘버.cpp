#include <string>
#include <vector>
#include <queue>

using namespace std;

int answer = 0;

void Tnum(vector<int> numbers, int target, int sum, int index) {
    if (index == numbers.size()) {
        if (sum == target)
            answer++;
        return;
    }
    
    Tnum(numbers, target, sum + numbers[index], index + 1);
    Tnum(numbers, target, sum - numbers[index], index + 1);    
}
int solution(vector<int> numbers, int target) {
    Tnum(numbers, target, 0, 0);
    return answer;
}