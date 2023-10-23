// 하드 코딩 웁쓰 ..
#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	cin>>test_case;

for (int i = 0; i < test_case; i++) {
		int arr[11][11] = { 0, };
		int N;
		cin >> N;

		int num = 1;
		// 1행 채우기
		for (int p = 0; p < N; p++) {
			arr[0][p] = num;
			num++;
		}

		int j = 0, k = N - 1;
		int count = N - 1;
		while (count >0) {
			for (int p = 0; p < count; p++) { // 오른쪽
				j++;
				arr[j][k] = num;
				num++;
			}
			for (int p = 0; p < count; p++) { // 아래
				k--;
				arr[j][k] = num;
				num++;
			}
			count--;
			for (int p = 0; p < count; p++) { // 왼쪽
				j--;
				arr[j][k] = num;
				num++;
			}
			for (int p = 0; p < count; p++) { // 위
				k++;
				arr[j][k] = num;
				num++;
			}
			count--;
		} // while
		cout << "#" << i+1 << endl;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << arr[i][j] << " ";
			}
			cout << '\n';
		}
	} // for


	return 0;
}