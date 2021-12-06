#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while(1)
    {
          cin>>x;
          if(x==0) break;
          for(int i=1;i<=x;i++)
          {
              printf("%d",i);
              if(i==x) break;
              printf(" ");
          }
          printf("\n");

    }
}
