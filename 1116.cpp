#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
    double x,y,z;
    cin>>x>>y;
    if(y==0)
    {
        printf("divisao impossivel\n");
    }
    else{
        z=x/y;
    printf("%.1lf\n",z);
    }

    }
    return 0;
}
