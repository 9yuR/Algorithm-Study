#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for (int x : array){
        string isSeven = to_string(x);
        for(char const &c : isSeven) {
            if(c == '7') answer++;
        }
        
    }
    return answer;
}