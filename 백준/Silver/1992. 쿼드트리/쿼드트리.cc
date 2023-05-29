#include <bits/stdc++.h>
using namespace std;
int arr[65][65] = { 0, };

void Quad_Tree(int x, int y, int num) {
	int pivot = arr[x][y];
	bool same = true;
	if (num == 1) { // 하나만 남을 경우
		same = true;
	}
	else {
		for (int i = x; i < x + num; i++) {
			if (!same) { // 다른 숫자가 나올 경우
				break;
			}
			for (int j = y; j < num + y; j++) {
				if (arr[i][j] != pivot) { // 다른 숫자가 나올 경우
					same = false;
					break;
				}
			}
		}
	}
	if (same) { // 다 같으면 출력
		cout << pivot;
	}
	else {
		cout << "(";
		Quad_Tree(x, y , num / 2); //왼쪽
		Quad_Tree(x, y + num / 2, num / 2); //오른쪽
		Quad_Tree(x+num/2, y , num / 2); //왼쪽 아래
		Quad_Tree(x+num/2, y + num / 2, num / 2); //오른쪽 아래
		cout << ")";
	}




}

int main(void)
{
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		string tmp;
		cin >> tmp;
		for (int j = 0; j < num; j++) {
			arr[i][j] = tmp[j]-'0';
		}
	}
	Quad_Tree(0, 0, num);
}
