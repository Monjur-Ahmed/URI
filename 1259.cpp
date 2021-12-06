#include<bits/stdc++.h>
using namespace std;

bool comp (int a, int b)
{
    return a>b;
}

int main()
{
    int N;
    cin>>N;
    int num[N],even[N],odd[N];

    for(int i=0; i<N; i++)
    {
       cin>>num[i];
    }

    int j=0,k=0;
    for(int i=0; i<N; i++)
    {
        if(num[i]%2==0)
        {
            even[j]=num[i];
            j++;
        }
        else
        {
            odd[k]=num[i];
            k++;
        }
    }
    sort(even,even+j);
    sort(odd,odd+k,comp);


    for(int i=0; i<j; i++)
    {
        cout<<even[i]<<endl;
    }
    for(int i=0; i<k; i++)
    {
        cout<<odd[i]<<endl;
    }

}
