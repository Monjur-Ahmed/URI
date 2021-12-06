#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int z=x;
    for(int i=1;i<=y;i++)
    {
        printf("%d",i);

     if(i==x)
     {
        printf("\n");
        x+=z;
     }
     else
     {
         printf(" ");
     }
    }
    return 0;
}
