#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
vector <int> v[11];
int visited[11] = { 0, };
int long_edge = 0;

void dfs(int x, int count) {
	if (count > long_edge) long_edge = count; 

	for (int i = 0; i < v[x].size(); i++) {
		int y = v[x][i];
		if (!visited[y]) { // 방문안했으면 
			visited[y] = 1; 
			dfs(y, count + 1);
			visited[y] = 0;
		}
	}
}

int main(){
	int t_c = 0; cin >> t_c;
	for (int i = 0; i < t_c; i++) {
		int N, M; // N : 정점의 번호, M : 간선
		cin >> N >> M;
		for (int j = 0; j < M; j++) {
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		for (int i = 1; i <=N; i++) { // 각 요소별 dfs 돌리면서 최장 길이 찾기
			visited[i] = 1;
			dfs(i,1);
			memset(visited, 0, sizeof(visited));
		}
		cout << "#" << i + 1 << " " << long_edge << endl;
		memset(v, 0, sizeof(v));
		long_edge = 0;
	}
	return 0;
}