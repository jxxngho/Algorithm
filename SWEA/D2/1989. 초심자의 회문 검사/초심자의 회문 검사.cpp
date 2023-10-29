#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	int cnt = 0;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		string str;
		cin >> str;
		int flag = 1; 

		for (int i = 0; i < str.size() / 2; i++) { // 비교
			if (str[i] != str[str.size() - 1 - i]) { 
				flag = 0;
                break;
			}
		}
		cout << "#" << i + 1 << " " << flag << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}