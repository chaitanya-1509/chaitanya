#include<stdio.h>
#include<string.h>
void main(){
    char town[20];
    char city[20];
    printf("Enter town name: ");
    scanf("%s",&town);
    strcpy(city,town);
    printf("after copying string the city is : %s", city);
    }
