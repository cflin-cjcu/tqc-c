#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int x1,y1,x2,y2;
    double a;
    scanf("%d",&x1);
    scanf("%d",&y1);
    scanf("%d",&x2);
    scanf("%d",&y2);

    a = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.2f",a);
    return 0;
}
