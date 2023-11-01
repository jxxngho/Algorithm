#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(),people.end()); // 정렬
    int flag = 0;
    for(int i=people.size()-1;flag <=i;i--){
       if(people[i]+people[flag]<=limit){
           flag++;
       }
        answer++;
    }
    return answer;
}