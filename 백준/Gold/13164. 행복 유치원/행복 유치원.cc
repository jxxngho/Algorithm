#include <bits/stdc++.h>
using namespace std;
int child[300001];
vector <int> interval;
int main() {
    int N, K;
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        child[i] = tmp;
    }
    if (K == 1) { // K==1일 경우
        cout << child[N-1] - child[0] << endl;
        return 0;
    }
    for (int i = 1; i < N; i++) { // 인접한 차이 값 저장
        interval.push_back(child[i] - child[i - 1]);
    }
    sort(interval.begin(), interval.end());

    
    int sum = 0;
    for (int i = 0; i < N- K ; i++) { // 제일 많이 차이나는 것 제외
        sum += interval[i];
    }
    cout << sum << endl;
    return 0;
}
