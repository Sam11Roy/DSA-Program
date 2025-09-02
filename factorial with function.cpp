#include<stdio.h>
int fac(int n);
int main(){
	int n;
	printf("enter a value: ");
	scanf("%d",&n);
	printf("%d", fac(n));
}
int fac(int n){
	if(n==0)
	return 1;
	
	else
	return fac(n-1)*n;
}

