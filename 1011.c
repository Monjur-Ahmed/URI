#include<stdio.h>
#define pi 3.14159
int main()
{
    int R;
    double v;
    scanf("%d",&R);
    v=(4.0/3)*pi*R*R*R;
    printf("VOLUME = %.3f\n",v);
    return 0;
}
