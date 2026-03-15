#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m,n,p,q;
    int a[100][100],b[100][100];
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    scanf("%d%d",&p,&q);
    for(int i=0;i<p;i++) for(int j=0;j<q;j++) scanf("%d",&b[i][j]);
    if (n!=p) {printf("error"); return 0;}
    for(int i=0;i<m;i++) {
        for(int j=0;j<q;j++) {
            int s=0;
            for(int k=0;k<n;k++) s+= a[i][k]*b[k][j];
            printf("%s%d",(j==0)? "": " ",s);
        }
        printf("\n");
    }
    return 0;
}
