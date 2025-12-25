#include<stdio.h>
#include<string.h>
void main(){
    char str1[20];
    char str2[20];
    int result;
    printf("Enter string 1 : ");
    scanf("%s",&str1);
    printf("Enter string 2 : ");
    scanf("%s",&str2);
    result = strcmp(str1,str2);
    if(result==0){
        printf("Both strings are same...");
    }
    else
    {
        printf("Both strings are not same...");
    }
}
