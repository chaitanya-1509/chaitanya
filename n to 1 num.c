#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the n value : ");
    scanf("%d",&n);
    printf("Numbers from %d to 1 is : ",n);
    for(i=n;i>=1;i--)
    {
        printf(" %d",i);
    }
}
