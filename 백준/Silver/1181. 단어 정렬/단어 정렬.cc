#include <bits/stdc++.h>
using namespace std;
vector<string> v;

bool compare(string a, string b) {
	if (a.length() == b.length()) { //길이가 같으면 
		return a < b; //사전순으로 a보다 b가 더 크면 a가 앞에 위치.
	}
	return a.length() < b.length(); // 길이가 다르면 , 길이순으로 a보다 b가 더 크면 a가 앞에 위치
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num; cin >> num;
	for (int i = 0; i < num; i++) {
		string str; cin >> str;

		if (find(v.begin(), v.end(), str) == v.end()) { // 중복되는 값은 안 넣음.
			v.push_back(str);
		}

	}

	sort(v.begin(), v.end(),compare);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i]<< '\n';
	}

	return 0;
} //main