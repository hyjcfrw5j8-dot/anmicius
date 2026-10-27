#include <stdio.h>
int main(void)
{
    const int sum=12;
    int a=0,b=0;
    printf("请输入两个数");
    scanf("%d%d",&a,&b);
    if(a+b>=sum&&a>=b)
    {
        printf("good\n");
    }
    else if(a+b>=sum&&a<b)
    {
        printf("bad\n");
    }
    else if(a+b<sum&&a>=b)
    {
        printf("best\n");
    }
    else
    {
        printf("worst\n");
    }
    return 0;
}



