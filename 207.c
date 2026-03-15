#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i,flag=0;
    scanf("%d",&a);
    // 1 a 以外 沒有整除
    for(i=2;i<a;i++) {
        if(a%i==0) {
            flag=1; //
            break;
        }
    }
    if (flag==1) {
        printf("%d is not a prime number", a);
    } else {
        printf("%d is a prime number", a);
    }
    return 0;
}
