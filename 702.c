#include<stdio.h>
int main(int argc, char const *argv[])
{
    char s[20]; 
    int d=0;
    scanf("%s",s);
    for(int i=0;s[i];i++) {
        d = d * 2 + s[i]-'0';
    }
    printf("%d",d);
    return 0;
}
