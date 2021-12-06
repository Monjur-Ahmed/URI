#include<bits/stdc++.h>
using namespace std;

int main()
{
    string exp[10000];

    while(scanf("%s", &exp) != EOF)
    {
        int open=0, close=0;

        for(int i=0; i<10;i++)
       {

        for(int j=0; j<exp[i].length(); j++)
        {
            if(exp[i][j]=='(')
            {
                open++;
            }

            if(exp[i][j]==')')
            {
                close++;
            }

        }

        if(open!=close || exp[0]==')' || exp[exp.length()-1]=='(' )
        {
            cout<<"incorrect"<<endl;
        }
        else
        {
            cout<<"correct"<<endl;
        }
       }

    }


}
