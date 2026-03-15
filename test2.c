#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[] = {100,70,30,20,10};
    int b[10];
    // a[0] a[1] a[2] a[3] a[4]
    printf("%p %d\n",&a[1], a[1]);
    printf("%p %d\n",a+1, *(a+1));
}
