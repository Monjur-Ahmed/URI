#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A,B,C,temp;
    cin>>A>>B>>C;
    double number[3]={A,B,C};
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(number[i]<number[j])
            {
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }

    }
        A=number[0];
        B=number[1];
        C=number[2];
    if(A>=B+C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
    if(A*A==B*B+C*C)
    {
        printf("TRIANGULO RETANGULO\n");
    }
      if(A*A>B*B+C*C)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
     if(A*A<B*B+C*C)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if((A==B) && (B==C) &&(A==C))
    {
        printf("TRIANGULO EQUILATERO\n");
    }
     if(((A==B )&&(B!=C)&&(A!=C))||((A==C )&&(A!=B)&&(B!=C))||((B==C )&&(A!=B)&&(A!=C)))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;
}
