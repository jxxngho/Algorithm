#include <iostream>
#include <cstring>
using namespace std;
int map[51][51] = { 0, };
int visited[51][51] = { 0, };
int dy[8] = { 0,1,1,1,0,-1,-1,-1 }, dx[8] = { 1,1,0,-1,-1,-1,0,1 }; //우,우하,하,좌하,좌,좌상,상,우상
int w, h; // w: 너비, h: 높이
void dfs(int y, int x) {
	for (int i = 0; i < 8; i++) {
		int dfs_x = x + dx[i];
		int dfs_y = y + dy[i];
		if (dfs_x < 0 || dfs_y < 0 || dfs_x >= w || dfs_y >= h) continue; // 지도범위안 
		if (map[dfs_y][dfs_x] == 1 && visited[dfs_y][dfs_x] == 0) { // 섬 && 방문 안한 곳
			visited[dfs_y][dfs_x] = 1;
			dfs(dfs_y, dfs_x);
		}
	}
}


int main() {
	while (true) {
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);
		int ans = 0; // 섬개수
		cin >> w >> h;
		if (w == 0 && h == 0) return 0; // 종료조건

		for (int i = 0; i < h; i++) { // 값 대입
			for (int j = 0; j < w; j++) {
				int tmp;
				cin >> tmp;
				map[i][j] = tmp;
			}
		}
		
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (map[i][j] == 1 && !visited[i][j]) { // 섬이고 방문안했을 경우
					dfs(i, j);
					ans++;
				}			
			}
		} 
		cout << ans << endl;
		
		// 0으로 초기화
		memset(map, 0, sizeof(map));
		memset(visited, 0, sizeof(visited));

	} // while
} // main