#include<stdio.h>
int main(int argc, char const *argv[])
{
    char a[10];
    int s = 1;
    scanf("%s",a);
    for(int i=0;a[i];i++) {
        // putchar(a[i]);
        // putchar(a[i+1] ? '*':'=');
        printf("%c%c", a[i], a[i+1] ? '*':'=');
        s *= a[i]-'0';
    }
    printf("%d",s);
    
    /* code */
    return 0;
}
