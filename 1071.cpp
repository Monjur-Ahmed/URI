#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X,Y,temp,sum=0;
    cin>>X>>Y;
    if(X>Y)
    {
        temp=Y;
        Y=X;
        X=temp;
    }
    for(int i=X+1;i<Y;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);

    return 0;
}
