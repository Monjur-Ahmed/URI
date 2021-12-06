#include<stdio.h>
int main()
{
    int days,months,years;
    scanf("%d",&days);
    years=days/365;
    months=(days%365)/30;
    days=days-((years*365)+(months*30));
    printf("%d ano(s)\n",years);
    printf("%d mes(es)\n",months);
    printf("%d dia(s)\n",days);

return 0;
}

