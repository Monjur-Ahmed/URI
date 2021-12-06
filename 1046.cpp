#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,e,x;
    cin>>s>>e;
    if(s>=e)
    {
        x=e+24-s;
        printf("O JOGO DUROU %d HORA(S)\n",x);
    }
    else
    {
        x=e-s;
        printf("O JOGO DUROU %d HORA(S)\n",x);
    }

    return 0;
}
