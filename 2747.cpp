#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=5;
    for(int i=0; i<39; i++)
    {
        cout<<"-";
    }
    cout<<endl;

    while(t--)
    {
        for(int i=0; i<39; i++)
        {
            if(i==0 || i==38)
            {
                cout<<"|";
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<endl;
    }
    for(int i=0; i<39; i++)
    {
        cout<<"-";
    }
    cout<<endl;

}
