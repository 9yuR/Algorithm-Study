#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string num = "";
    
    for(auto &c : my_string) {
        if (isdigit(c))
            num += c;
        else if (num != "") {
            answer += stoi(num);
            num = "";
        }
    }
    
    if (num != "") 
            answer += stoi(num);
    return answer;
}