#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int count = 0;
	string str;
	cin >> str;
	int num=str.length();
	int ans = 0;
	for (int i = 0; i < num; i++) {
		if (str[i] == '(') {
			ans++;
		}
		else if (ans >= 1&&')') {
			ans--;
		}
		else {
			count++;
		}
	}
	cout << count+ans;
}