#include <stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("enter meal price \n");
    scanf("%d",&a);

    printf("enter tip percent\n");
    scanf("%d",&b);

    printf("enter tax percent \n");
    scanf("%d",&c);

    d=(a*b)/100;

    e=(a*c)/100;

    f=a+d+e;
    printf("total price is:%d",f);
    return 0;
}