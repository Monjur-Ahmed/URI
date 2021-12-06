#include<bits/stdc++.h>
using namespace std;
int main()
{
    double number[6];
    int value=0;
    float sum=0,avg;
    for(int i=0;i<6;i++)
    {
        scanf("%lf",&number[i]);
    }
    for(int i=0;i<6;i++)
    {
        if(number[i]>0)
        {
            value++;
            sum=sum+number[i];
        }
    }
    avg=sum/value;
    printf("%d valores positivos\n",value);
    printf("%.1f\n",avg);

    return 0;
}
