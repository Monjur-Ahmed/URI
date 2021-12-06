#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
    float x,y;
    cin>>x;
    while((x<0)||(x>10))
    {
        printf("nota invalida\n");
        cin>>x;
    }
    cin>>y;
    while((y<0)||(y>10))
    {
        printf("nota invalida\n");
        cin>>y;
    }
    float avg=(x+y)/2.0;
    printf("media = %.2f\n",avg);
    int t;
    printf("novo calculo (1-sim 2-nao)\n");
    cin>>t;
    while((t>2)||(t<1))
        { printf("novo calculo (1-sim 2-nao)\n");
           cin>>t;
        }
    if(t==2)
    {
        break;
    }
    }
    return 0;
}

