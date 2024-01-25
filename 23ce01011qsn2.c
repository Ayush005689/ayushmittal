#include<stdio.h>
int main()
{
    int a,b,c,x,y;
    printf("enter a,b,c \n");
    scanf("%d %d %d",&a,&b,&c);

    x=(a>b)? a:b;
    y=(x>c)? x:c;

    printf("maximum of three numbers is %d \n",y);
    return 0;   

}