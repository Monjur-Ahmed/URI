#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        if(x==0) break;
        int y=10+x;
        int sum=0;
        for(int i=x;i<y;i++)
        {
            if(i%2==0)
            {
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
