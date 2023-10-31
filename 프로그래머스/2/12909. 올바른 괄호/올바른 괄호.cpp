#include<string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int push_count = 0; // '(' 들어간 것
    for(int i=0;i<s.size();i++){
        if(s[i] =='('){
            push_count++;
        }
        else{
            push_count--;
        }
        
        if(push_count<0){
            answer = false;
            break;
        }
    }
    if(push_count!=0) answer = false; // 문자열을 끝냈는데도 0이 아닌 경우 -> )이 부족하다.
    return answer;
}