#include<stdio.h>
#include<string.h>
void main(){
    char str1[20];
    char str2[20];
    printf("Enter string 1 : ");
    scanf("%s",&str1);
    printf("Enter string 2 : ");
    scanf("%s",&str2);
    printf("concatination of two strings is : %s",strcat(str1,str2));
    }
