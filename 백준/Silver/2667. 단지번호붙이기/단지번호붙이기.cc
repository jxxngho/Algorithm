#include <bits/stdc++.h>
using namespace std;
int visited[26][26] = { 0, };
int M[26][26] = { 0, };
int map_size;
int dx[] = { 0,0,1,-1 };
int dy[] = { 1,-1,0,0 };

vector <int> home_complex;
int bfs(int x, int y) {
	int ans = 0;
	queue <pair<int, int>> qu;
	qu.push({ x,y });
	visited[x][y] = 1;
	while (!qu.empty()) {
		ans++;
		int cur_x = qu.front().first;
		int cur_y = qu.front().second;
		qu.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur_x + dx[i];
			int ny = cur_y + dy[i];
			if (visited[nx][ny] != 0) continue; // 방문한 곳
			if (0 > nx || nx >= map_size || 0 > ny || ny >= map_size) continue; // 범위 넘어갔을 때
			if (M[nx][ny] == 1) {
				visited[nx][ny] = 1; // 방문 표시
				qu.push({ nx,ny });
			}
		}
	}
	return ans;
}


int main(){
	cin >> map_size; // 지도의 크기

	for (int i = 0; i < map_size; i++) { 
		string tmp;
		cin >> tmp;
		for (int j = 0; j < map_size; j++) {
			M[i][j] = tmp[j]-'0';
		}
	}

	for (int i = 0; i < map_size; i++) {
		for (int j = 0; j < map_size; j++) {
			if (visited[i][j] == 0 && M[i][j]==1) {
				int home = bfs(i, j);
				home_complex.push_back(home);
			}
		}
	}

	sort(home_complex.begin(), home_complex.end()); // 정렬
	cout << home_complex.size() << endl;
	for (int i = 0; i < home_complex.size(); i++) {
		cout << home_complex[i] << endl;
	}
}

