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
    int k=11,j=1,x=2;
    for (int i=11;i>6; i--)
    {
         for(j; j<k;j++)
         {
           sum+=M[i][j];
           count++;
         }
         j=x;
         x++;
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



