#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[100][100] = {0};
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            putchar((a[i][j])&&(!a[i-1][j]||!a[i+1][j]||!a[i][j-1]||!a[i][j+1])? '*':' ');
        }
        printf("\n");
    }    


    return 0;
}
