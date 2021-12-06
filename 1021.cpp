#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    double amount;
    long long int cent;
   int hundred,fivety,twenty,ten,five,two,one,pointFive,pointTwentyFive,pointTen,pointZeroFive,pointZeroOne;
   int rem100,rem50,rem20,rem10,rem5,rem2,rem1,remPointFive,remPointTwentyFive,remPoint10,remPointZeroFive;
    cin>>amount;
    cent=amount*100;
    hundred=cent/10000;
    rem100=cent%10000;
    fivety=rem100/5000;
    rem50=rem100%5000;
    twenty=rem50/2000;
    rem20=rem50%2000;
    ten=rem20/1000;
    rem10=rem20%1000;
    five=rem10/500;
    rem5=rem10%500;
    two=rem5/200;
    rem2=rem5%200;
     one=rem2/100;
     rem1=rem2%100;
     pointFive=rem1/50;
     remPointFive=rem1%50;
     pointTwentyFive=remPointFive/25;
     remPointTwentyFive=remPointFive%25;
     pointTen=remPointTwentyFive/10;
     remPoint10=remPointTwentyFive%10;
     pointZeroFive=remPoint10/5;
     remPointZeroFive=remPoint10%5;
     pointZeroOne=remPointZeroFive/1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",hundred);
    printf("%d nota(s) de R$ 50.00\n",fivety);
    printf("%d nota(s) de R$ 20.00\n",twenty);
    printf("%d nota(s) de R$ 10.00\n",ten);
    printf("%d nota(s) de R$ 5.00\n",five);
    printf("%d nota(s) de R$ 2.00\n",two);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",one);
    printf("%d moeda(s) de R$ 0.50\n",pointFive);
    printf("%d moeda(s) de R$ 0.25\n",pointTwentyFive);
    printf("%d moeda(s) de R$ 0.10\n",pointTen);
    printf("%d moeda(s) de R$ 0.05\n",pointZeroFive);
    printf("%d moeda(s) de R$ 0.01\n",pointZeroOne);

    return 0;


}

