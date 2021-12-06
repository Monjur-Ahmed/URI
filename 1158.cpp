#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        int sum=0;
        int z=2*y+x;
        for(int i=x;i<z;i++)
        {
            if(i%2!=0)
            {
              sum+=i;
            }

        }
        printf("%d\n",sum);
    }
    return 0;
}
