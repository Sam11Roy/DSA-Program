#include<stdio.h>
void swap(int a, int b){
int t = a;
a = b;
b = t;
  printf("a: %d \nb: %d\n",a,b);    
}
int main(){
    int a,b;
    printf("Enter the first value: ");
    scanf("%d",&a);
     printf("Enter the second value: ");
    scanf("%d",&b);
    printf("You Entered a: %d, b: %d",a,b);
    printf("After swapping: \n");
    swap(a,b);
}
