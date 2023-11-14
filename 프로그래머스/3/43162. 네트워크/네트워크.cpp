#include <string>
#include <vector>
#include <queue>
using namespace std;
int visited[201] ={0,}; // 방문 체크

void bfs(int point, vector<vector<int>> computers) {
    queue <int> q;
    visited[point] = 1;
    q.push(point);
    while (!q.empty()) { // bfs
        int x = q.front();
        q.pop();
        for (int i = 0; i < computers[x].size(); i++) {
            if (i != x && !visited[i] && computers[x][i] == 1) { // i!=j && 방문안했을 때
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) { // 방문안했을때
            answer++;
            bfs(i, computers);
        }
    }
    return answer;
}