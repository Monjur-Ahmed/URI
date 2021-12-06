#include<stdio.h>
int main()
{

    int number[3],i,j,temp,a,b,c;
    for(i=0;i<=2;i++)
    {

        scanf("%d",&number[i]);
    }
    a=number[0];
    b=number[1];
    c=number[2];
  for(i=0;i<=2;i++)
  {
      for(j=i+1;j<=2;j++)
      {
          if(number[i]>number[j])
          {
              temp=number[i];
              number[i]=number[j];
              number[j]=temp;
          }
      }
  }

  for(i=0;i<=2;i++)
  {
      printf("%d\n",number[i]);
  }
  printf("\n");
  printf("%d\n",a);
   printf("%d\n",b);
    printf("%d\n",c);

    return 0;
}
