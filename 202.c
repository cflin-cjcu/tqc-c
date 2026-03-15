#include<stdio.h>
int main(int argc, char const *argv[])
{
    int s;
    scanf("%d",&s);
    if(s < 0 || s > 100) {
        printf("error");
    } else {
        if(s>60) {
            printf("%d",s+10);
        } else {
            printf("%d",s+5);
        }
    }
    return 0;
}
