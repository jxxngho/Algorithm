#include <iostream>
#include <queue>
#include<vector>
using namespace std;


int main() {
	int card;
	int count = 1;
	queue <int> q;
	vector <int> v;
	cin >> card;
	for (int i = 1; i <= card; i++) {
		q.push(i);
	}

	while (q.size() !=1) {
		if (count % 2 != 0) { //홀수
			int num = q.front();
			q.pop();
			v.push_back(num);	
		}
		else {
			int num = q.front();
			q.pop();
			q.push(num);
		}
		count++;
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i]<<" ";
	}
	cout << q.front();

}