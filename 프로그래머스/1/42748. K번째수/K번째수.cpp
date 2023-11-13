#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int i=0;i<commands.size();i++){
         vector<int> tmp;
         int a = commands[i][0];
         int b = commands[i][1];
         for(int j=a-1;j<b;j++){
            tmp.push_back(array[j]);
         }
         sort(tmp.begin(),tmp.end());    
         int c =commands[i][2];
         answer.push_back(tmp[c-1]);
    }
    
    
    return answer;
}