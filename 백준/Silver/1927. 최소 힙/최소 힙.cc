#include <iostream>
#include <queue>
#include <vector>
using namespace std;
priority_queue<int,vector<int>,greater<int>> pq;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
	vector <int> v;
	int count;
	cin >> count;
	while (count--) {
		int num;
		cin >> num;
		if (num == 0) {
			if (pq.empty()) {
				v.push_back(0);
			}
			else {
				v.push_back(pq.top());
				pq.pop();
			}
		}
		else {
			pq.push(num);
		}		
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
}