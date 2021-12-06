#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    float A,B,C,R1,R2,root;
    cin>>A>>B>>C;
    if((A*2==0)||(B*B<4*A*C))
    {
        printf("Impossivel calcular\n");
    }
    else
    {
    root=sqrt(B*B-4*A*C);
    R1=(-B+root)/(2*A);
    R2=(-B-root)/(2*A);
    printf("R1 = %.5f\n",R1);
     printf("R2 = %.5f\n",R2);
    }
     return 0;
}
