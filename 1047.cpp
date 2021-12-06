#include<bits/stdc++.h>
using namespace std;
int main()
{
    int inM,inH,enM,enH,x,y;
    cin>>inH>>inM>>enH>>enM;
    if(inH>=enH)
    {
        if((inH==enH)&&(enM>inM))
        {
            x=enH-inH;
        }
        else
        {
             x=enH+24-inH;
        }

        if(inM>enM)
        {
            y=enM+60-inM;
            x=x-1;
        }
        else{
            y=enM-inM;
        }

         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
    }
    else
    {
         x=enH-inH;
        if(inM<enM)
        {
            y=enM-inM;
        }
          if(inM>enM)
        {
            y=enM+60-inM;
            x=x-1;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
    }

    return 0;
}

