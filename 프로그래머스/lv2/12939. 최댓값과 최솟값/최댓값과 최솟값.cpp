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
        while(s[i]!=' '&&s[i]!='\0'){
            if(i-1==s.size()){
                break;
            }
            a+=s[i];            
            i++;
        }
        v.push_back(stoi(a));
        
    }
    sort(v.begin(),v.end());
    answer+=to_string(v[0]);
    answer+=" ";
    answer+=to_string(v[v.size()-1]);
    return answer;
}