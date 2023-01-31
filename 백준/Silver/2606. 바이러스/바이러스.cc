#include <bits/stdc++.h>
using namespace std;
bool visited[101]; //방문 여부
vector <int> v[101];

int bfs(int start) {
	queue<int> q;
	q.push(start); // 첫 노드 queue에 삽입
	visited[start] = true; // 첫 노드 방문 처리
	int cnt = 0;
	while (!q.empty()) {
		// 큐가 비면 break
		int x = q.front();
		cnt++;
		q.pop();  // 큐에서 원소 하나 빼서 출력
		for (int i = 0; i < v[x].size(); i++) {
			int y = v[x][i];

			if (!visited[y]) {
				q.push(y);
				visited[y] = true; // 방문처리
			}
		}
	}
	return cnt;
}


int main() {

	int com; cin >> com; // 컴퓨터 개수
	int node; cin >> node; // 노드 개수
	while (node--) {
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	cout << bfs(1) - 1 << endl;
	return 0;
} //main
