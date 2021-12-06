#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x,y;
  while(scanf("%d %d",&x,&y)!=EOF)
  {
      if(x==y) break;
     else if (x<y)
     {
         printf("Crescente\n");
     }
     else
        printf("Decrescente\n");


  }

  return 0;
}
