#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int A=0, B=0, V=0;
	// V미터 올라가는데 
	// 낮에는 A만큼 올라가고
	// 밤에는 B만큼 떨어지고
	// 정상에 올라가면 떨어지지않는다.
	cin >> A>>B>>V;
	if (A == V) { // 첫 날에 정상에 올라가는 경우
		cout << 1 << '\n';
		return 0;
	}
	int count = 1;
	V -= A;
	int i = V / (A - B);

	if(V%(A-B)!=0){
		count += V / (A - B)+1;
	}
	else {
		count += V / (A - B);
	}
	cout << count << '\n';
	return 0;	
}