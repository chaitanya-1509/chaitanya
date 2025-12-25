#include<stdio.h>
void main()
{
    int pre,cur,total_units;
    float unit_cost,bill_amt;
    printf("Enter previous month meter readings");
    scanf("%d",&pre);
    printf("Enter current month meter readings");
    scanf("%d",&cur);
    total_units = cur-pre;
    if(total_units<=50)
        unit_cost = 1.50;
        else if(total_units<=100)
        unit_cost = 2.50;
        else if(total_units<=200)
        unit_cost = 3.50;
        else
        unit_cost = 4.50;
        bill_amt = total_units*unit_cost;
        printf("TOTAL ELECTRICITY BILL AMOUNT IS:%f",bill_amt);
}
