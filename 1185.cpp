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

    int k=11;
    for (int i=0;i<11; i++)
    {
         for(int j=0; j<k;j++)
         {
           sum+=M[i][j];
         }
         k--;
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



