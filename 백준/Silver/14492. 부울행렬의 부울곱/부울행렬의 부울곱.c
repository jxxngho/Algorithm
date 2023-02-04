#include <stdio.h>

int main(){
	int n;
	int arr1[310][310]={0}, arr2[310][310]={0}, arr3[310][310]={0};
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &arr1[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &arr2[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<n; k++){
				arr3[i][j]|=arr1[i][k]&arr2[k][j];
			}
		}
	}
	int cnt=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr3[i][j]) cnt++;
		}
	}
	printf("%d", cnt);
}