#include <iostream>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;
	map<string, int> m;
	while (num--) {
		string str;
		cin >> str;
		string newstr = str.substr(str.find(".") + 1);
		if (m.find(newstr) != m.end()) {
			m[newstr]+= 1;
		}
		else {
			m.insert({ newstr,1 });
		}
	}
	for (auto iter = m.begin(); iter != m.end(); iter++)
	{
		cout << iter->first << " " << iter->second << '\n';
	}
}