#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct ROBOT {
    int x, y, dir;
};

const int dx[] = {-1, 0, +1, 0};
const int dy[] = {0, +1, 0, -1};
int map[50][50];
int N, M;

ROBOT robot;

int main(void) {
    cin >> N >> M;
    cin >> robot.x >> robot.y >> robot.dir;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
        }
    }
    
    queue<ROBOT> q;
    q.push(robot);
    
    int ret = 0;
    while(!q.empty()) {
        ROBOT cur = q.front(); q.pop();
        if (map[cur.x][cur.y] == 0) {
            map[cur.x][cur.y] = 2;
            ++ret;
        }
        for (int dir = 0; dir < 4; dir++) {
            ROBOT next;
            next.dir = (cur.dir + 3 - dir) % 4;
            next.x = cur.x + dx[next.dir];
            next.y = cur.y + dy[next.dir];
            
            if (next.x < 0 || next.x >= N || next.y < 0 || next.y >= M || map[next.x][next.y] != 0)
                continue;
            
            q.push(next);
            break;
        }
        
        if(q.empty()) {
            ROBOT next;
            next.dir = cur.dir;
            next.x = cur.x + dx[(next.dir + 2) % 4];
            next.y = cur.y + dy[(next.dir + 2) % 4];
            
            if (next.x < 0 || next.x >= N || next.y < 0 || next.y >= M || map[next.x][next.y] == 1)
                break;
            q.push(next);
        }
    }
    cout << ret << '\n';
    return 0;
}