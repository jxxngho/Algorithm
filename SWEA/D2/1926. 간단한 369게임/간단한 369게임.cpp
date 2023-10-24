#include <string>
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int num = 0;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		if (i < 10) { // 10 미만
			if (i % 3 == 0) {
				cout << "- ";
			}
			else {
				cout << i << " ";
			}
		}
		else if (i < 100) { // 100 미만
			string str = "";
			if ((i % 10) == 3 || (i % 10) == 6 || (i % 10) == 9) { // 일의 자리가 3,6,9일때
				str += "-";
			}
			if ((i % 100 - i % 10) % 3 == 0 || (i % 100 - i % 10) % 6 == 0 || (i % 100 - i % 10) % 9 == 0) { // 십의 자리가 3,6,9일때
				str += "-";
			}
			if (str.size() != 0) {
				cout << str << " ";
			}
			else {
				cout << i << " ";
			}
		}
		else if (i < 1000) { // 1000 미만
			string str = "";
			if ((i % 10) == 3 || (i % 10) == 6 || (i % 10) == 9) { // 일의 자리가 3,6,9일때
				str += "-";
			}
			if ((i % 100 - i % 10) % 3 == 0 || (i % 100 - i % 10) % 6 == 0 || (i % 100 - i % 10) % 9 == 0) { // 십의 자리가 3,6,9일때
				str += "-";
			}
			if ((i % 1000 - i % 100 - i%10) % 3 == 0 || (i % 1000 - i % 100 - i % 10) % 6 == 0 || (i % 1000 - i % 100 - i % 10) % 9 == 0) { // 십의 자리가 3,6,9일때
				str += "-";
			}
			if (str.size() != 0) {
				cout << i << " ";
			}
			else {
				cout << str << " ";
			}
		}
	}

	
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}