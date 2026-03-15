#include<stdio.h>
#include<math.h>

int compute(int n) {
    //371
    int a = n;
    int d = 1;
    int s = 0;
    if(n<10){
        d = 1;
    } else if(n<100) {
        d = 2;
    } else if(n<1000) {
        d = 3;
    }
   
    while (a!=0) {
        s += pow(a%10,d);
        a /= 10;
    }
    return (s == n)? 1 : 0;

}

int main(int argc, char const *argv[])
{
    int n,s=0;
    scanf("%d", &n);
    for(int i=1;i<n;i++) {
        if(compute(i)==1) {
            printf("%d\n",i);
            s += i;
        }
    }
    printf("%d",s);
    return 0;
}
