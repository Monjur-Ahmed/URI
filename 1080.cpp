#include<bits/stdc++.h>
using namespace std;
int main()
{
    int pos,maxi;
    int num[100];
    for(int i=0;i<100;i++)
    {
        cin>>num[i];
    }
    maxi=num[0];
    for(int i=0;i<100;i++)
    {

       if(maxi<num[i])
       {
           maxi=num[i];
           pos=i;
       }
    }
    printf("%d\n",maxi);
    printf("%d\n",pos+1);

    return 0;
}

