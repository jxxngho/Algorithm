#include <iostream>
#include <cstring>
using namespace std;
int arr[10000] = { 0, };
int siz = 0;
int q = 0;
int fr = 0;
void push(int n) {
	arr[q] = n;
	siz++;
	q++;
}
void pop() {
	if (siz == 0) {
		cout << -1 << endl;
	}
	else {
		cout << arr[fr] << endl;
		arr[fr] = 0;
		siz--;
		fr++;

	}
}
void size() {
	cout << siz << endl;
}
void empty() {
	if (siz == 0) {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}
}
void front() {
	if (siz == 0) {
		cout << -1 << endl;
	}
	else {
		cout << arr[fr] << endl;
	}
}
void back() {
	if (siz == 0) {
		cout << -1 << endl;
	}
	else {
		cout << arr[q-1] << endl;
	}
}
int main() {
	int count = 0;
	cin >> count;
	while (count != 0) {
		string str;
		int n;
		cin >> str;
		if (str == "push") {
			cin >> n;
			push(n);
		}
		else if (str == "front") {
			front();
		}
		else if (str == "back") {
			back();
		}
		else if (str == "size") {
			size();
		}
		else if (str == "empty") {
			empty();
		}
		else if (str == "pop") {
			pop();
		}	
		count--;
	}
}