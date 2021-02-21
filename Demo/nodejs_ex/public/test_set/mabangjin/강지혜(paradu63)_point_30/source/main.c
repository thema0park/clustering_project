#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l,sum1,sum2,sum3,sum11,sum22,sum33,sumF1,sumF2;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)

			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////

    sum1=sum2=sum3=sum11=sum22=sum33=sumF1=sumF2=0;

 for(k=0;k<MABANGJIN_SIZE;k++)
 {
     for(l=0;l<MABANGJIN_SIZE;l++)

    {if(k==0)
     sum1+=mabangjin[k][l];
     
     
    if(k==1)
     sum2+=mabangjin[k][l];
    
   
    if(k==2)
     sum3+=mabangjin[k][l];
     
 }
 }
 for(l=0;l<MABANGJIN_SIZE;l++)
 {
     for(k=0;k<MABANGJIN_SIZE;k++)

   { if(l==0)
     sum11+=mabangjin[k][l];
     
     
    if(l==1)
     sum22+=mabangjin[k][l];
    
   
    if(l==2)
     sum33+=mabangjin[k][l];}
     
 }

for(k=0;k<MABANGJIN_SIZE;k++)
{
    sumF1+=mabangjin[k][k];
}//대각선합함
 sumF2=mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];



if(sum1==sum2==sum3==sum11==sum22==sum33==sumF1==sumF2)
answer='O';
else
answer='X';
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
