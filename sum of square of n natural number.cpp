#include<stdio.h>
int main(){
	int n,sum ;
	printf("enter the value: ");
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		sum+=i*i;
	}
	printf("%d",sum);
}
