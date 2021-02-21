#include <stdio.h>
#include <math.h>

int main()
{
    int h;
    int q, m, K, J;

    scanf("%d %d %d %d", &q, &m, &K, &J);

    h=(q+((m+1)*26)/10+K+(K/4)+(J/4)+5*J)%7;

    if(h==0) printf("Saturday\n");
    else if(h==1) printf("Sunday\n");
    else if(h==2) printf("Monday\n");
    else if(h==3) printf("Tuesday\n");
    else if(h==4) printf("Wednesday\n");
    else if(h==5) printf("Thursday\n");
    else if(h==6) printf("Friday\n");


   return 0;
}
