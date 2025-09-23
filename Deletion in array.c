#include<stdio.h>
int main(){
    int size,a,pos ;
     printf(" Enter the Size of array: " );
    scanf("%d",&size);
    int arr[size];
    printf("Enter the element of array :\n");
    for(int i=0; i<size;i++)
	{
    printf(" Enter the %d Value: " , i);
    scanf("%d",&arr[i]);
	}
	printf("enter the position to delete : ");
	scanf("%d",&pos);
	for(int j=pos-1; j<size;j++ )
	{
   	arr[j]=arr[j+1];	
	}
	
	size--;
	printf("new array is : \n");
	
	for(int i=0; i<size;i++)
	{
		printf("%d , " , arr[i]);
	}
	
}
