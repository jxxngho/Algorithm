#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    for(int i=1;i<=yellow/2+1;i++){ // yellow 기준 (x,y) 계산
        if(yellow%i==0){ // 나누기해서 떨어질때 
            if((yellow/i +2)*2 + i*2 == brown){
                // brown 개수 파악 -> (x,y) 기준으로 가로(x+2 *2) + 세로(y*2) 
                // brown과 같으면 종료 
                answer.push_back(yellow/i +2);
                answer.push_back(i+2);
                break;
            }
        }
    }
    return answer;
}