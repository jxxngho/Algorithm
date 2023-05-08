#include <bits/stdc++.h>
using namespace std;
int arr[101][101];
int visited[101];
void bfs(int start,int n) {
	queue<int>q;
	q.push(start); // 첫 노드 큐에 삽입

	while (!q.empty()) {
		int x = q.front();
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (arr[x][i] != 0 && !visited[i]) {
				q.push(i);
				visited[i] = visited[x] + 1;
			}
		}
	}


}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int num; // 사람수
	cin >> num;
	int start, end; // 구해야 할 사이
	cin >> start >> end;
	int cnt; // 관계 수
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	bfs(start, num);

	if (visited[end] == 0) {
		cout << -1 << endl;
	}
	else {
		cout << visited[end] << endl;
	}
	return 0;	
}