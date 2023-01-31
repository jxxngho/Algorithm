#include <bits/stdc++.h>
using namespace std;
bool visited[499501]; //방문 여부
vector<int> v[1001];
void bfs(int num) {

	queue<int> q;
	q.push(num); // 첫 노드 queue에 삽입
	visited[num] = true; // 첫 노드 방문 처리

	while (!q.empty()) {
		int a = q.front();
		q.pop();

		for (int i = 0; i < v[a].size(); i++) {
			int y = v[a][i]; 
			if (!visited[y]) { // 방문하지 않았을 경우
				q.push(y);
				visited[y] = true;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int node; cin >> node;
	int edge; cin >> edge;

	while (edge--) {
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	int cnt = 0;
	for (int i = 1; i <= node; i++) {
		if (visited[i] == true) { //방문했으면 continue
			continue;
		}
		else { // 방문하지 않았다면 연결요소 +1 해주고 bfs
			cnt++;
			bfs(i);
		}
	}
	cout << cnt<< '\n';
	return 0;
} //main