#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    float A,B,C,avg;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>A>>B>>C;
        avg=(A*2+B*3+C*5)/10;
        printf("%.1f\n",avg);
    }

    return 0;
}
