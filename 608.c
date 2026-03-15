#include<stdio.h>
int main(int argc, char const *argv[])
{
    int b1=0,b2=0,b3=0,s=0,x;
    for(int i=0;i<10;i++) {
        scanf("%d",&x);
        if(x==1) {
            s += b3;
            b3 = b2;
            b2 = b1;
            b1 = 1;
        } else if(x==2) {
            s += b3 + b2;
            b3 = b1;
            b2 = 1;
            b1 = 0;
        } else if(x==3) {
            s += b3 + b2 + b1;
            b3 = 1;
            b2 = 0;
            b1 = 0;
        } else if(x==4) {
            s += b3 + b2 + b1 + 1;
            b3 = 0;
            b2 = 0;
            b1 = 0;
        }
        
    }
    printf("score = %d", s);
    return 0;
}
