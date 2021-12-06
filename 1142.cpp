#include<bits/stdc++.h>
using namespace std;
int main()
{

    int N;
    cin>>N;
    int j=1,k=3;
    for(int i=1;i<=N;i++)
    {
        for(j;j<=k;j++)
        {
            printf("%d ",j);
        }
        printf("PUM\n");
        j++;
        k+=4;
    }
}
