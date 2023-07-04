#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<string> day = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };
    vector<int> last_day = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int idx = 0;
    
    for(int i = 0; i < a - 1; i++) 
        idx += last_day[i];
    
    idx += b;
    
    if (idx % 7 == 0)
        return day[6];

    return day[idx % 7 - 1];
}