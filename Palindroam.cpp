
#include<stdio.h>
int main (){
     int n ,rem, rev=0,num;
     printf("enter a number :");
     scanf("%d",&n);
     num=n;
	while(n!=0){
		rem=n%10;
    	rev=rev*10 +rem;
    	n=n/10;
	}
	if(num==rev){
		   printf("Number is Palindroam",&num);
	}
	else
	printf(" Number is not Palindroam ",&num);
	
		   return 0;
	}
	
