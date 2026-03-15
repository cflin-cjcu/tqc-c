#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main(int argc, char const *argv[])
{
    int a[100], i;
    for(i=0;i<4;i++) scanf("%d",&a[i]);
    
    FILE *in = fopen("read.txt","r");
    FILE *out = fopen("write.txt","w");

    while(fscanf(in,"%d",&a[i])!=EOF) i++;
    
    qsort(a,i,sizeof(int),cmp);

    for(int j=0;j<i;j++) {
        printf("%d\n",a[j]);
        fprintf(out,"%d\n",a[j]);
    }
    
    return 0;
}
