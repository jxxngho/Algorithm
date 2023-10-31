#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int cit_size  = citations.size();
    
    sort(citations.begin(), citations.end());
    for(int i=0;i<citations[cit_size-1];i++){ // 제일 큰 수까지
        int cnt = 0;
        for(int j=0;j<cit_size;j++){ // 배열돌면서 체크 
            if(citations[j]>=i) cnt++;
        }
        if(i<=cnt) answer = i;
        
    }
    
    return answer;
}