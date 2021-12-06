#include<stdio.h>
int main()
{

    int p1code,p2code,p1num,p2num;
    float p1price,p2price,total;
    scanf("%d %d %f",&p1code,&p1num,&p1price);
    scanf("%d %d %f",&p2code,&p2num,&p2price);
    total=p1num*p1price+p2num*p2price;
    printf("VALOR A PAGAR: R$ %.2f\n",total);

    return 0;

}
