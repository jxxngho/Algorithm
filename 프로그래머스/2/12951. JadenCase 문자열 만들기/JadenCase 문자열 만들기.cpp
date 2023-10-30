#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string s) {
    string answer = "";
    string tmp="";
    for(int i=0;i<s.size();i++){    
        tmp+=s[i];
        if(s[i]==' '||i==s.size()-1){
            for(int j=0;j<tmp.size();j++){
                if(tmp[j]>='A'&&tmp[j]<='Z'){
                    tmp[j]+=32;
                }
            }
            if(tmp[0]>='a'&&tmp[0]<='z'){
                tmp[0] -=32;
            }
            answer += tmp;
            tmp="";
        } // if
    } // for
    return answer;
}