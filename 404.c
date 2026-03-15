#include<stdio.h>

int main(int argc, char const *argv[])
{
    //refrigerator
    char s[50];
    int a[26]= {0}, m=0, p=0;
    scanf("%s",s);

    for(int i=0;s[i];i++) a[s[i]-'a']++;
    for(int i=0;i<26;i++) if(a[i]>m) m=a[p=i];
    // m=a[p=i]  m=a[i]; p=i;
    printf("%c\n%d",p+'a',m);
    return 0;
}
