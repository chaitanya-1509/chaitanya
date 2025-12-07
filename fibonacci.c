#include<stdio.h>
void main()
{
    int i,n1=0,n2=1,n3,n;
    printf("enter n values:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    n3=n1+n2;
    printf("\nfibonacci series :%d",n3);
    n1=n2;
    n2=n3;
    }
}
    
    