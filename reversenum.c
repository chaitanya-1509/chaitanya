#include<stdio.h>
void main()
{
    int i,n;
    printf("enter n values:");
    scanf("%d",&n);
    printf("reverse numbers from %d to 1 :\n",n);
    for(i=n;i>=1;i--){
    printf("%d,",i);
    }
}
    
    