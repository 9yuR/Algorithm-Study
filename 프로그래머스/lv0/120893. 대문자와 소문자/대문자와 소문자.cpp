#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(char const &c : my_string) {
        if ('A' <= c && c <= 'Z') 
            answer += tolower(c);
        else
            answer += toupper(c);
    }
    return answer;
}