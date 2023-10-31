#include <bits/stdc++.h>
using namespace std;

int number = 7;
int visited[1001];
vector <int> a[1001];

void dfs(int x) { // dfs
	if (visited[x]) return;
	visited[x] = true;

	cout << x << ' ';
	for (int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		dfs(y); // 재귀 
	}
}


void bfs(int start) {
	visited[start] = true;
	queue<int> q;
	q.push(start);
	while (!q.empty()) {
		int x = q.front();
		cout << x << ' ';
		q.pop();
		for (int i = 0; i < a[x].size(); i++) {
			int y = a[x][i];
			if (!visited[y]) {
				q.push(y);
				visited[y] = true; // 방문 처리
			}
		}

	}

}



int main() {
	int node, edge, start_node;
	cin >> node >> edge >> start_node;
	
	int x, y;
	for (int i = 0; i < edge; i++) {
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}

	for (int i = 1; i <= node; i++) { // 정점 번호 작은 것 부터 방문
		sort(a[i].begin(), a[i].end());
	}
	dfs(start_node);
	cout << '\n';
	memset(visited, 0, sizeof(visited)); // 방문한 것 초기화
	bfs(start_node);

}