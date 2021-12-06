#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,in=0,out=0;
    long long int x;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>x;
        if(x>=10 && x<=20)
        {
            in++;
        }
        else
            out++;
    }
    printf("%d in\n",in);
     printf("%d out\n",out);
     return 0;
}
