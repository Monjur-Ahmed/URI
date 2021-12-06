#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,pos,mini;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    mini=num[0];
    for(int i=0;i<n;i++)
    {

       if(mini>num[i])
       {
           mini=num[i];
           pos=i;
       }
    }
    printf("Menor valor: %d\n",mini);
    printf("Posicao: %d\n",pos);

    return 0;
}
