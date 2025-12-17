#include<stdio.h>
#define MAX 10
void main()
{
    int i,n[MAX];
    int total =0;
    printf("Enter %d array elements:",MAX);
    for(i=0;i<MAX;i++){
    scanf("%d",&n[i]);
    }for(i=0;i<MAX;i++){
    total = total+n[i]/MAX;
    }
    printf("TOTAL VALUE IS:%d",total);
}