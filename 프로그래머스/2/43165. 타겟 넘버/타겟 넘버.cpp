#include <string>
#include <vector>

using namespace std;
int answer = 0;
void dfs(vector<int> numbers, int sum, int i, int target) {
        if (i == numbers.size()) {
             if (sum == target) answer++;
        }  
        else {
            dfs(numbers, sum + numbers[i], i + 1,  target); // 더하기
            dfs(numbers, sum - numbers[i], i + 1, target); // 빼기
        }

        return;
}

int solution(vector<int> numbers, int target) {
    dfs(numbers, 0, 0, target);
    return answer;
}