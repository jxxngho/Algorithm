#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string s) {
    string answer = "";
    string tmp="";
    for(int i=0;i<s.size();i++){    
        tmp+=s[i];
        if(s[i]==' '||i==s.size()-1){ //공백을 만났을 때, 맨 끝일 때
             if(tmp[0]>='a'&&tmp[0]<='z'){ // 맨 첫번째 문자가 소문자인 경우 
                tmp[0] -=32; // 대문자 변환
             }
             for(int j=1;j<tmp.size();j++){
                if(tmp[j]>='A'&&tmp[j]<='Z') // 대문자 -> 소문자변환
                    tmp[j]+=32;
            } // for
            answer += tmp;
            tmp="";
        } // if
    } // for
    return answer;
}