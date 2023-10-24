#include <string>
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int num = 0;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		string str = to_string(i);
		string ans = "";
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '3' || str[i] == '6' || str[i] == '9') {
				ans+="-";
			}
		}

		if (ans.size() != 0) { // 3,6,9 중 하나라도 있을 때
			cout << ans << " ";
		}
		else { // 3,6,9,가 없을 때
			cout << i << " ";
		}
	}

	
	return 0;
}