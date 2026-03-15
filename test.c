#include<stdio.h>

int pstar(int n, int m, char c) {
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%c",c);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int a=6,i;
    pstar(6,10,'i');
}



