#include <bits/stdc++.h>
using namespace std;

vector<int> v[1001];

int bfs(int num,int node) {
	bool visited[1001] = { 0, }; // 방문 여부
	int weight[1001] = { 0, }; // 가중치
	queue<int> q;
	q.push(num); // 첫 노드 queue에 삽입
	visited[num] = true; // 첫 노드 방문 처리
	int cnt = 0;
	while (!q.empty()) {
		int a = q.front();
		q.pop();
		for (int i = 0; i < v[a].size(); i++) {
			int y = v[a][i];	
			if (!visited[y]) { // 방문하지 않았을 경우
				q.push(y);
				visited[y] = true;
				weight[y] = weight[a] + 1;
				
			}
		}
	}
	int ans = 0;
	for (int i = 1; i <= node; i++) {
		ans += weight[i];
	}
	return ans;
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
	int min = 100000;
	int ans = 0;
	for (int i = 1; i <= node; i++) {
		int tmp = bfs(i, node);
		if (min >tmp) {
			ans = i;
			min = tmp;
		}

	}
	cout <<ans<< '\n';
	return 0;
} //main