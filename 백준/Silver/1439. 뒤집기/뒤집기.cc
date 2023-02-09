#include <bits/stdc++.h>
using namespace std;

string s;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> s; // 문자열
	int o_count = 0, z_count = 0;;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[i + 1]) {
			if (s[i] == '0'){
				z_count++; 
			}
			else {
				o_count++;
			}
		}
	}
		cout << min(o_count, z_count) << '\n';
	

	return 0;
} //main