#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer="";
    vector <int> v;
    for(int i=0;i<s.size();i++){
        string a="";
        if(s[i]=='-'){
            a="-";
            i++;
        }
        while(s[i]!=' '&&s[i]!='\0'){ //맨 마지막 '\0' 조심
            if(i-1==s.size()){
                break;
            }
            a+=s[i];            
            i++;
        }
        v.push_back(stoi(a)); // string to int
        
    }
    sort(v.begin(),v.end());
    answer+=to_string(v[0]);
    answer+=" ";
    answer+=to_string(v[v.size()-1]); // int to string
    return answer;
}