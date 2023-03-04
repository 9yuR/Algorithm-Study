#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    int len_A = A.length();
    
    for(int i = 0; i < len_A; i++) {
        if (!B.compare(A))
            return answer;
        answer++;
        
        char s = A[len_A-1];
        A = A.substr(0, len_A-1);
        A = s + A;
    }
    return -1;
}