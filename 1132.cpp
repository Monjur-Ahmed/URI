#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X,Y;
    long long int sum=0;

    cin>>X>>Y;

    if(X>Y)
    {
        swap(X,Y);
    }

    for(int i=X; i<=Y; i++)
    {
        if(i%13!=0)
        {
            sum+=i;
        }
    }

    cout<<sum<<endl;
}
