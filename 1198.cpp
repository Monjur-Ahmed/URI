#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int x,y,temp,result;
    while(scanf("%lld %lld",&x,&y)!=EOF)
    {
        if(y<x)
        {
            temp=x;
            x=y;
            y=temp;
        }
        result=y-x;
        printf("%lld\n",result);
    }
    return 0;
}
