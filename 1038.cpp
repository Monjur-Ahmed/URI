#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X,Y,index;
    float price;
    cin>>X>>Y;
    index=X;
    switch(index)
    {
        case 1:
            price= Y*4.00;
            printf("Total: R$ %.2f\n",price);
            break;
        case 2:
            price= Y*4.50;
             printf("Total: R$ %.2f\n",price);
            break;
        case 3:
             price= Y*5.00;
              printf("Total: R$ %.2f\n",price);
            break;
            case 4:
             price= Y*2.00;
              printf("Total: R$ %.2f\n",price);
            break;
            case 5:
                 price= Y*1.50;
                  printf("Total: R$ %.2f\n",price);
            break;

    }

    return 0;
}


