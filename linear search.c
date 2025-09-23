#include<stdio.h>
int main(){
    int size,a,val,i,fb ;
    printf(" Enter the Size of array: " );
    scanf("%d",&size);
    int arr[size];
    printf("Enter the element of array :\n");
    for(i=0; i<size; i++)
	{
    printf(" Enter the %d Value: " , i);
    scanf("%d",&arr[i]);
	}
	printf("enter the value for search  : ");
	scanf("%d",&val);
	for(i=0; i<size; i++)
	{
		if(arr[i]==val)
		{
			printf("element %d found in position %d : ",val,i+1);
			fb=1;
			break;
		}
		else fb=0;
	}
	if (fb==0)
	{
		printf("element not found ") ;
	}
}

