#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, t, b,f=1;   //30
    scanf("%d",&a);
    t = a;
    b = 2;
    while(t!=1){
        if(t%b==0) {
            if(b==a) {
                printf("%d",-1);
                break;
            }         
            // if(f!=1) {
            //     printf("*"); 
            // } else {  
            //     f = 0;
            // }    
            printf("%s%d",(f==1)? "":"*",b);
            f=0;
            t/=b;
        } else {
            b++;
        }
    }

    return 0;
}
