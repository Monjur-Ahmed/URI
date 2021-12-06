#include<stdio.h>
int main()
{

    char name[20];

    double basic,sales, bonous,total;

    scanf("%s %lf  %lf",name,&basic,&sales);
    bonous=sales*0.15;
    total=basic+bonous;
    printf("TOTAL = R$ %.2f\n",total);

    return 0;

}
