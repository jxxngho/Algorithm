#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i=n-1;i>0;i--){
        if(n%i==1){
            answer=i;
        }
    }
    return answer;
}