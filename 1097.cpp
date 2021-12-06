#include<bits/stdc++.h>
using namespace std;
int main()
{
int j=7,limit=5;
   for(int i=1;i<=9;i=i+2)
   {
       for( j;j>=limit;j--)
       {
           printf("I=%d J=%d\n",i,j);
       }
       j=j+5;
       limit=j-2;
   }

     return 0;
}


