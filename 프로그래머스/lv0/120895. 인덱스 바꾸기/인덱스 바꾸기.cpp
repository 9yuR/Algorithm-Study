#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    const char temp2 = my_string[num1];
    const char temp1= my_string[num2];
    my_string[num1] = temp1;
    my_string[num2] = temp2;
    return my_string;
}