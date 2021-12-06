#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int amount;
    int hundred,fivety,twenty,ten,five,two,one;
    int rem100,rem50,rem20,rem10,rem5,rem2;
    cin>>amount;
    hundred=amount/100;
    rem100=amount%100;
    fivety=rem100/50;
    rem50=rem100%50;
    twenty=rem50/20;
    rem20=rem50%20;
    ten=rem20/10;
    rem10=rem20%10 ;
    five=rem10/5;
    rem5=rem10%5;
    two=rem5/2;
    rem2=rem5%2;
    one=rem2/1;
    printf("%d\n",amount);
    printf("%d nota(s) de R$ 100,00\n",hundred);
    printf("%d nota(s) de R$ 50,00\n",fivety);
    printf("%d nota(s) de R$ 20,00\n",twenty);
    printf("%d nota(s) de R$ 10,00\n",ten);
    printf("%d nota(s) de R$ 5,00\n",five);
    printf("%d nota(s) de R$ 2,00\n",two);
    printf("%d nota(s) de R$ 1,00\n",one);

    return 0;


}
