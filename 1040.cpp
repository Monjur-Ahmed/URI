#include<bits/stdc++.h>
using namespace std;
int main()
{
    float N1,N2,N3,N4,N5,average,last;
    cin>>N1>>N2>>N3>>N4;
    average=(N1*2+N2*3+N3*4+N4*1)/10;
    printf("Media: %.1f\n",average);
    if(average>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    if(average<5.0)
{
    printf("Aluno reprovado.\n");
}
if(average>=5.0 && average<=6.9)
{
    printf("Aluno em exame.\n");
    cin>>N5;
    printf("Nota do exame: %.1f\n",N5);
    last=(average+N5)/2;
    if(last>=5.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(last<=4.9)
    {
          printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n",last);
}

return 0;
}
