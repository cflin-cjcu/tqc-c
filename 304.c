#include<stdio.h>
int compute(int a[]){
    int c=0;
    for(int i=0;i<6;i++) {
        if(a[i]%3==0) {
            c += 1;
        }
    }
    return c;
}

int main(int argc, char const *argv[])
{
    int a[6],c=0;
    for(int i=0;i<6;i++) {
        scanf("%d",&a[i]);
    }
    printf("%d",compute(a));
    return 0;
}
