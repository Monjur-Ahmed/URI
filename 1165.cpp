#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,prime=0;
    long long int n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(j=2;j<n;j++)
        {
            if(n%j==0)
            {

                prime++;
            }

        }
        if(prime==0)
        {
            printf("%d eh primo\n",n);
        }
        else{
            printf("%d nao eh primo\n",n);
        }
        prime=0;
    }

    return 0;
}
