#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    char c;
    scanf("%d",&a);
    scanf("%d\n",&b);
    scanf("%c",&c);
    switch (c)
    {
    case '+':
        printf("%d+%d=%d",a,b,a+b);
        break;
    case '-':
        printf("%d-%d=%d",a,b,a-b);
        break;
    case '*':
        printf("%d*%d=%d",a,b,a*b);
        break;    
    default:
        printf("error");
        break;
    }    
    return 0;
}
