#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    FILE *fin = fopen("read.txt","r");
    FILE *fout = fopen("write.txt","w");
    char a[200];
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        fgets(a,sizeof(a),fin);
        a[0] -= 32;
        for(int j=1;j<strlen(a);j++) {
            if(a[j-1]==' ') {
                a[j] -= 32;
            }
        }
        printf("%s",a);
        fprintf(fout,"%s",a);
    }

    return 0;
}
