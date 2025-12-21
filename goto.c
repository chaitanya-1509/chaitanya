
#include<stdio.h>
void main(){
    for (int i = 0; i < 5; i++) {
        if (i == 3){
            goto mkc;
        }
        printf("%d ", i);
    }
mkc:
    printf("\nJumped to the 'mkc' label %s",
    "when i equals 3.");

}