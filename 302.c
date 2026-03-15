#include<stdio.h>
int compute(int s) {
    if(s<0 || s>100) {
        return -1;
    } else {
        if(s>=60) {
            return s+5;
        } else {
            return s+10;
        }
    }
}

int main(int argc, char const *argv[])
{
    int a;
    scanf("%d",&a);
    printf("%d", compute(a));
    return 0;
}

