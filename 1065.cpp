#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number[5];
    int value=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&number[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(number[i]%2==0)
        {
            value++;
        }
    }
    printf("%d valores pares\n",value);

    return 0;
}
