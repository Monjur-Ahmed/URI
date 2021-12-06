#include<bits/stdc++.h>
using namespace std;

int main()
{
    string O;
    float M[12][12];
    float sum=0,avg=0;

    cin>>O;

    for(int i=0; i<12; i++)
        for(int j=0; j<12; j++)
            cin>>M[i][j];


    for (int i=1;i<12; i++)
    {
         for(int j=0; j<i; j++)
         {
           sum+=M[i][j];
         }
    }

    cout <<setprecision(1) <<fixed;
    if (O=="S")
       cout<<sum<<endl;

    if (O=="M")
    {
        cout<<sum/66.0<<endl;
    }


    return 0;

}


