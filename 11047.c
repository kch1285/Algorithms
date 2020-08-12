#include <stdio.h>

int main(){
	int n,k,arr[10]={0, },cnt=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=n-1;i>=0;i--){
		if(k>=arr[i]){
			while(k>=arr[i]){
				k=k-arr[i];
				cnt++;
			}
		}
	}
	printf("%d\n",cnt);
	return 0;
}