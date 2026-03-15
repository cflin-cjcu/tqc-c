#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int *) a -  *(int *) b;
}

int main(int argc, char const *argv[])
{
    int a[9],s=0;
    for(int i=0;i<9;i++) {
        scanf("%d",&a[i]);
    }

    qsort(a,9,sizeof(int),cmp);

    for(int i=0;i<9;i++) {
        printf("%d\n",a[i]);
        s+=a[i];
    }
    printf("sum = %d",s);

    return 0;
}
