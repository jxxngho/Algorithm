#include <bits/stdc++.h>
using namespace std;
int visited[601][601] = { 0, };
char campus[601][601] = { 0, };
int people = 0;
int num1, num2; // num1 == x축 , num2 == y축
int bfs(int x, int y) {
	queue<pair<int, int>> qu;
	qu.push({ x,y});
	visited[x][y] = 1;
	while (!qu.empty()) {
		int cur_x = qu.front().first;
		int cur_y = qu.front().second;
		qu.pop();
		if (campus[cur_x][cur_y] == 'P') {
			people++;
		}
		if (cur_y - 1 > -1 && visited[cur_x][cur_y - 1] == 0 && campus[cur_x][cur_y - 1] != 'X') { // 왼쪽으로 갈 수 있는 경우
			visited[cur_x][cur_y - 1] = 1;
			qu.push({ cur_x,cur_y - 1 });
		}
		if (cur_y + 1 < num2 && visited[cur_x][cur_y + 1] == 0 && campus[cur_x][cur_y + 1] != 'X') { // 오른쪽으로 갈 수 있는 경우
			visited[cur_x][cur_y + 1] = 1;
			qu.push({ cur_x,cur_y + 1 });
		}
		if (cur_x + 1 <num1 && visited[cur_x+1][cur_y] == 0 && campus[cur_x+1][cur_y] != 'X') { //아래쪽으로 갈 수 있는 경우
			visited[cur_x+1][cur_y] = 1;
			qu.push({ cur_x+1,cur_y  });
		}
		if (cur_x -1 >-1 && visited[cur_x - 1][cur_y] == 0 && campus[cur_x - 1][cur_y] != 'X') { //위쪽으로 갈 수 있는 경우
			visited[cur_x - 1][cur_y] = 1;
			qu.push({ cur_x - 1,cur_y });
		}
	}
	return  people;
}


int main(){

	int x, y;
	cin >> num1 >> num2;
	for (int i = 0; i < num1; i++) {
		string tmp;
		cin >> tmp;
		for (int j = 0; j < tmp.size(); j++) {

			campus[i][j] = tmp[j];
			if (tmp[j] == 'I') {
				x = i;
				y = j;
			}
		}
	}
	int ans = bfs(x, y);
	if (ans == 0) {
		cout << "TT" << endl;
	}
	else {
		cout << ans << endl;
	}
}

