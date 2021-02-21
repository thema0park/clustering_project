#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
    int a,b,c,d,e,f,h,i;
char as[8]={'0','0','0','0','0','0','0','0'};
char aa[8]={'0','0','0','0','0','0','0','0'};
char ac[9]={'0','0','0','0','0','0','0','0','0'};
char ad[9]={'0','0','0','0','0','0','0','0','0'};
scanf("%s",as);
scanf("%s",aa);

for(i=7;i>=0;i--)
{
ac[i+1]+=as[i]+aa[i]-'0'-'0';
if(ac[1+i]>'1')
{
ac[i+1]+= -'2'+'0';
ac[i]+='1'-'0';
}
}
for(e=1;e<=8;e++)
{
printf("%c",ac[e]);
}
printf("\n");
	return 0;
}
