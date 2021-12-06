#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,y;
    cin>>x;
    while((x<0)||(x>10))
    {
        printf("nota invalida\n");
        cin>>x;
    }
    cin>>y;
    while((y<0)||(y>10))
    {
        printf("nota invalida\n");
        cin>>y;
    }
    float avg=(x+y)/2.0;
    printf("media = %.2f\n",avg);
    return 0;
}
