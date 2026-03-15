#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,i,s=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++){
        if(i%2==1) {
            // printf("%d ",i);
            s+=i;
        }
    }
    printf("%d",s);
    return 0;
}
