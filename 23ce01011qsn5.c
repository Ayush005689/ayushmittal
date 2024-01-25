#include<stdio.h>
int main()
{
    int n;
    printf("input a number: \n");
    scanf("%d",&n);
    if(n&1==1)
    primtf("the number is odd \n");
    else
    printf("the numberis even \n");
    return 0;
}