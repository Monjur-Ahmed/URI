#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    long long int X;
    cin>>N;
    for(int i=0;i<N;i++)
    {
      scanf("%lld",&X);
      if(X%2==0)
      {
          if(X<0)
          {
              printf("EVEN NEGATIVE\n");

          }
          else if(X==0)
          {
              printf("NULL\n");
          }

          else{
            printf("EVEN POSITIVE\n");
          }
      }
      else
      {
          if(X<0)
          {
              printf("ODD NEGATIVE\n");

          }
          else{
            printf("ODD POSITIVE\n");
          }
      }
    }

    return 0;
}
