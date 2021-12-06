#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[20];
    int mod[20];
    for(int i=0;i<20;i++)
    {
        cin>>num[i];
    }
    int j=0;
    int temp;
    for(int i=19;i<=10;i--)
    {
       mod[j]=num[i];
       mod[i]=num[j];
       j++;
    }
    for(int i=0;i<20;i++)
    {
      printf("N[%d] = %d\n",i,mod[i]);
    }

    return 0;
}
