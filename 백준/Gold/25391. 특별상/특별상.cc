#include <bits/stdc++.h>
using namespace std;
vector <pair<long, long>> score; // fir :  주최자, sec = 심판
bool compare(const pair<long, long>& a, const pair<long, long>& b)
{
	return a.second > b.second;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long  num, m, n;
	cin >> num >> m>> n;
	while (num--) {
		long a, b;
		cin >> a >> b;
		score.push_back(make_pair(b, a));

	}
	sort(score.begin(), score.end(),greater<>()); // 심판 내림차순


	long sum = 0; 
	for (long i = 0; i < n; i++) { //심판은 무조건 뽑음.
		sum += score[i].second;
		score[i].first = -100; // 심판이 뽑은 사람은 뽑지 않기 위해 -100 값 적용
	}
	sort(score.begin(), score.end(), compare); // 주최자 내림차순 

	long cnt = 0;
	long i = 0;
	while (true) {
		if (cnt == m) {
			break;
		}
		if (score[i].first != -100) {
			// 심판이 뽑지 않은 사람 중에 주최자가 높은 점수를 준 사람 뽑기
			sum += score[i].second;
			cnt++;
		}
		i++;

	}
	cout << sum << '\n';

	return 0;
} //main