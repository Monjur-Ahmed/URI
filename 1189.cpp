#include<bits/stdc++.h>
using namespace std;

int main()
{
    string O;
    double M[12][12];
    double sum=0,avg=0;

    cin>>O;

    for(int i=0; i<12; i++)
        for(int j=0; j<12; j++)
            cin>>M[i][j];

    float count=0;
    for (int i=1;i<6; i++)
    {
         for(int j=0; j<i;j++)
         {
           sum+=M[i][j];
           count++;
         }
    }

    int k=5;
    for (int i=6;i<11; i++)
    {
         for(int j=0; j<k;j++)
         {
           sum+=M[i][j];
           count++;
         }
         k--;
    }

    cout <<setprecision(1) <<fixed;
    if (O=="S")
       cout<<sum<<endl;

    if (O=="M")
    {
        cout<<sum/count<<endl;
    }

    return 0;

}



