#include<bits/stdc++.h>
using namespace std;
int main()
{
    int firstNumber=0,secondNumber=1,fibo,n;
    cin>>n;
    printf("%d %d",firstNumber,secondNumber);
    for(int i=3;i<=n;i++)
    {
    fibo=firstNumber+secondNumber;
    firstNumber=secondNumber;
    secondNumber=fibo;
    printf(" %d",fibo);
    }
    printf("\n");



}
