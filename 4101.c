//410
#include <stdio.h>

int main(){
    int n,c,sp=1; //sp 是要換字
    FILE *a=fopen("read.txt","r");
    FILE *b=fopen("write.txt","w");
    scanf("%d",&n);
    while(n && (c=fgetc(a))!=EOF){
        if(sp) c-=32;
        sp=(c==' '||c=='\n'); 
        if(c=='\n') n--;
        putchar(c); 
        fputc(c,b);
    }
}