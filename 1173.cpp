#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x;
   cin>>x;
   int num[10];
   num[0]=x;
   int j=0;
   for(int i=1;i<10;i++)
   {
      num[i]=num[j]*2;
      j++;
   }
   for(int i=0;i<10;i++)
   {
       printf("N[%d] = %d\n",i,num[i]);
   }
   return 0;
}

