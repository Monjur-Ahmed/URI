#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sn;
    int sd,shh,smm,sss;
    scanf("%s %d",sn,&sd);
    scanf("%d : %d : %d",&shh,&smm,&sss);

    string en;
    int ed,ehh,emm,ess;
    scanf("%s %d",en,&ed);
    scanf("%d : %d : %d",&ehh,&emm,&ess);

    int day,hour,minute,second;
    if(ess<sss)
    {
        second=ess+60-sss;
    }
    if(ess>=sss)
    {
        second=ess-sss;
    }
        if(emm>=smm)
        {
            minute=emm-smm;
        }
        if(emm<smm)
        {
            minute=emm+60-smm;
        }
        if(ehh<shh)
        {
            hour=ehh+24-shh;
            day=ed-sd-1;
        }
           if(ehh>=shh)
        {
            hour=ehh-shh;
            day=ed-sd;
        }
    printf("%d dia(s)\n",day);
     printf("%d hora(s)\n",hour);
      printf("%d minuto(s)\n",minute);
       printf("%d segundo(s)\n",second);

    return 0;
}
