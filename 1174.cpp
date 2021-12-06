#include<bits/stdc++.h>
using namespace std;
int main()
{
    float num[100];
    for(int i=0;i<100;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<100;i++)
    {
        if((num[i]<10)||(num[i]==10))
        {
            printf("A[%d] = %.1f\n",i,num[i]);
        }
    }

    return 0;
}
