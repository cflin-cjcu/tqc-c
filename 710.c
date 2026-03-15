#include<stdio.h>
int q[4] = {0};

void printq(){
    for(int i=0;i<4;i++) printf("%d%c",q[i],' ');
    printf("\n");
}

int checkq(int x) {  //0=已經有 1=不在裡面
    for(int i=0;i<4;i++) if(q[i]==x) return 0;
    return 1;
}


int main(int argc, char const *argv[])
{
    int x, p=0;

    for(int i=0;i<10;i++) {
        scanf("%d",&x);
        if(checkq(x)) q[p++%4] = x;
        printq();
    }


    





    return 0;
}
