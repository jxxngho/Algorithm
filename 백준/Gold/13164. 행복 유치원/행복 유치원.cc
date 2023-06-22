#include <bits/stdc++.h>
using namespace std;
int arr[300001];
vector <int> v;
int main() {
    int N, K;
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        arr[i] = tmp ;
    }
    if (K == 1) { // K==1일 경우
        cout << arr[N-1] - arr[0] << endl;
        return 0;
    }
    for (int i = 1; i < N; i++) { // 인접한 차이 값 저장
        v.push_back(arr[i] - arr[i - 1]);
    }
    sort(v.begin(), v.end());

    
    int sum = 0;
    for (int i = 0; i < N- K ; i++) { // 제일 많이 차이나는 것 제외
        sum += v[i];
    }
    cout << sum << endl;
    return 0;
}