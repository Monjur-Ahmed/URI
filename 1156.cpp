#include<bits/stdc++.h>
using namespace std;
int main()
{
    float s=0,j=1;
  for(float i=1;i<=39;i=i+2)
  {
      s+=i/j;

            j=2*j;


  }
  printf("%.2f\n",s);
  return 0;
}
