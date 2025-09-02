#include<stdio.h>
int fac(int n);
int main(){
	int a,b;
	printf("enter two value: ");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value after swap ");
	printf("a: %d, b:%d",a,b);

}
