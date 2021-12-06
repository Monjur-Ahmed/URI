#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        if((m==0)||(n==0)||(m<0)||(n<0)) break;
        if(m>n)
        {
            int temp=m;
            m=n;
            n=temp;
        }
        int sum=0;
        for(int i=m;i<=n;i++)
        {
            printf("%d ",i);
            sum+=i;
        }
        printf("Sum=%d\n",sum);
    }
    return 0;
}
