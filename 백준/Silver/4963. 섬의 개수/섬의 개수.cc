#include <iostream>
#include <cstring>
using namespace std;
int arr[51][51] = { 0, };
int visited[51][51] = { 0, };
int w, h; // w : 너비 , h : 높이
int dx[8] = { -1,-1,-1,0,0,1,1,1 }, dy[8] = { -1,0,1,-1,1,-1,0,1 };
void dfs(int y, int x) {
	for(int i=0;i<8;i++){
		int dfs_x = x + dx[i];
		int dfs_y = y + dy[i];
		if (dfs_x < 0 || dfs_y < 0 || dfs_x >= w || dfs_y >= h) continue; // 범위 check
		if (!visited[dfs_y][dfs_x] && arr[dfs_y][dfs_x] == 1) { 
			visited[dfs_y][dfs_x] = 1;
			dfs(dfs_y, dfs_x);
		}


	}
}


int main() {	
	while (true) {
		cin >> w >> h;
		if (w == 0 && h == 0) return 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				int tmp;
				cin >> tmp;
				arr[i][j] = tmp;
			}
		} // 초기화부분
		int ans = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (visited[i][j] == 0 && arr[i][j] ==1) {
					visited[i][j] = 1;
					ans++;
					dfs(i, j);
				}
			}
		}
		cout << ans << endl;
		memset(arr, 0, sizeof(arr));
		memset(visited, 0, sizeof(visited));



	}
	
}