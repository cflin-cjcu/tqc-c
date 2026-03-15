#include<stdio.h>

int compute(int n) {
    if(n==0) {
        return 1;
    } else {
        return n * compute(n-1);
    }
}


int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    printf("%d!=%d",n,compute(n));
    return 0;
}
