#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char a[100],b[100];
    int lena=0, lenb=0;
    scanf("%s%s",a,b);
    lena = strlen(a);
    lenb = strlen(b);
    if(lena<3||lena>20||lenb<3||lenb>20) {
        printf("error");
        return 0;
    }
    printf("%d\n%d\n",lena,lenb);
    for(int i=lenb-1;i>=0;i--) printf("%c",b[i]);
    for(int i=lena-1;i>=0;i--) printf("%c",a[i]);

    return 0;
}
