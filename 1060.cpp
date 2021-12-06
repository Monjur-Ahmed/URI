#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int value=0;
     float number[6];
     for(int i=0;i<6;i++)
     {
         scanf("%f",&number[i]);
         if(number[i]>0)
         {
             value++;
         }

     }
     printf("%d valores positivos\n",value);
     return 0;
 }
