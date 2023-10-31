#include <bits/stdc++.h>
using namespace std;

vector <int> a[101];
int visited[101];
int ans = 0;
void dfs(int start) {
	if (visited[start]) return;
	else {
		visited[start] = 1;
		ans++;
	}

	for (int i = 0; i < a[start].size(); i++) {
		int y = a[start][i];
		dfs(y);
	}
}

int main() {
	int count_com;
	cin >> count_com;
	int edge;
	cin >> edge;
	int x, y;
	for (int i = 0; i < edge; i++) {
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}

	dfs(1);
	cout << ans - 1;
	return 0;
}