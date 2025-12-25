#include<stdio.h>
#define max 3
void main(){
    int a[max][max];
    int i,j;
    printf("Enter the elements:\n");
    for(i=0;i<max;i++){
        for(j=0;j<max;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nsimple 2D matrix is:\n");
        for(i=0;i<max;i++) {
        for(j=0;j<max;j++){
        printf(" %d",a[i][j]);
        }
        printf("\n");
        }
}
