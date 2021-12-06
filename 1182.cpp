#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    float M[12][12];
    float sum=0,avg=0;

    cin>>n;
    cin>>s;

    for(int i=0; i<12; i++)
        for(int j=0; j<12; j++)
            cin>>M[i][j];


    for (int i=0;i<12; i++)
           sum+=M[i][n];

    cout <<setprecision(1) <<fixed;
    if (s=="S")
       cout<<sum<<endl;

    if (s=="M")
    {
        cout<<sum/12.0<<endl;
    }


    return 0;

}
