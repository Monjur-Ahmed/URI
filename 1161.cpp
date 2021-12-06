#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
    long long int mfact=1,nfact=1,sum;
    for(int i=m;i>=1;i--)
    {
        mfact=mfact*i;
    }
    for(int i=n;i>=1;i--)
    {
        nfact=nfact*i;
    }
    sum=mfact+nfact;
    printf("%lld\n",sum);
    }
    return 0;

}
