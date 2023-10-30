#include <algorithm>
#include <vector>


using namespace std;
int solution(vector<vector<int>> triangle) {
    int answer = 0;
    for (int i = 1; i < triangle.size(); i++) {
        for (int j = 0; j < triangle[i].size(); j++) {
            if (j == 0) { // 처음
                triangle[i][j] += triangle[i - 1][j];
            }
            else if (j == triangle[i].size() - 1) { // 마지막
                triangle[i][j] += triangle[i - 1][j - 1];
            }
            else { //바로 위 왼쪽 오른쪽 중에 큰 것과 더하기
                triangle[i][j] += max(triangle[i - 1][j-1], triangle[i - 1][j]);
            }

        }
    } // for
    int tri_size = triangle.size() - 1; // 마지막행
    for (int i = 0; i < triangle[tri_size].size(); i++) {
        if (answer < triangle[tri_size][i]) // 최댓값 찾기
            answer = triangle[tri_size][i];
    }

    return answer;
}