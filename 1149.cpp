#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,N;
    int sum=0;
   while(scanf("%d %d",&A,&N)!=EOF)
   {
      while(1)
     {

       if((N==0)||(N<0))
       {
           cin>>N;
       }
       if(N>0)break;
      }
    for(int i=A;i<A+N;i++)
    {
        sum+=i;
    }
    printf("%d\n",sum);
    sum=0;
   }

  return 0;
}
