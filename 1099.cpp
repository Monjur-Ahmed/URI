#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,y,sum=0;
        cin>>x>>y;
        if(x>y)
        {
            int temp=x;
            x=y;
            y=temp;
        }
        for(int i=x+1;i<y;i++)
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
