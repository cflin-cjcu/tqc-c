#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char a[] = "ABCDE";
    int len = 0;
    for(int i=0;a[i];i++) {
        printf("%c %d\n", a[i],a[i]+2);
        len++;
    }  
    printf("%d",strlen(a));

    return 0;
}
