#include<stdio.h>
int main()
{
    int a;
    printf("enter total number of days a: \n");
    scanf("%d",&a);

    int years=a/365;
    printf("years=%d \n",years);
    int months=(a%365)/30;
    printf("months=%d \n",months);
    int weeks=(a%365%30)/7;
    printf("weeks=%d \n",weeks);
    int days=(a%365%30%7);
    printf("days=%d \n",days);
    return 0;

}