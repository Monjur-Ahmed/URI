#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dep,travel,des,current;
    cin>>dep>>travel>>des;
    current=dep+travel+des;
    if(current>24)
    {
        printf("%d\n",current-24);
    }
    if(current<0)
    {
        printf("%d\n",24+current);
    }
    if((current>=0)&&(current<24)){
        printf("%d\n",current);
    }
    if(current==24)
    {
        printf("0\n");
    }

    return 0;
}
