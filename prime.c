#include<stdio.h>
void main()
{
    int i,num;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=2;i<=num;i++){
        if(num%i==0)
        break;
    }
        if(i==num){
            printf(" prime number...");
        }
        else
        {
            printf("not prime");
        }
}