#include <iostream>
#include <string>
using namespace std;

int main(){
	for (int i = 1; i <= 10; i++) {
		int ans = 0; // 정답
		int trash = 0; cin >> trash;
		string find_str, search_str;
		cin >> find_str >> search_str;
		string tmp = "";
		int flag = 0;
		for (int i = 0; i < search_str.size(); i++) {
			if (find_str[flag] == search_str[i]) { // 한글자씩 확인 
				flag++;
				tmp += search_str[i];
			}
			else {
				if (i > 0 && search_str[i] == find_str[0] ) {
					tmp = search_str[i];
					flag = 1;
				}
				else {
					tmp = "";
					flag = 0;
				}
			}
			if (tmp == find_str) { // 찾았을 때
				ans += 1;
				flag = 0;
				tmp = "";
			}
		}
		cout << "#" << i << " " << ans << endl;
	}
	return 0;
}