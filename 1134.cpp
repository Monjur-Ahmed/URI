#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,alcol=0,gaso=0,diesel=0;
    while(scanf("%d",&num)!=EOF){
          if(num==4) break;
    if(num<0) break;
    switch(num)
    {
    case 1:
        alcol++;
        break;
    case 2:
        gaso++;
        break;
    case 3:
        diesel++;
        break;
    }
}
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcol);
    printf("Gasolina: %d\n",gaso);
    printf("Diesel: %d\n",diesel);
return 0;
}
