#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int temp1=0,temp2=0,temp3=0,temp4=0,temp5=0,temp6=0,temp7=0,temp8=0;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
			
    temp1 = mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2];
    
	temp2 = mabangjin[1][0] + mabangjin[1][1] + mabangjin[1][2];

	temp3 = mabangjin[2][0] + mabangjin[2][1] + mabangjin[2][2];

	temp4 = mabangjin[0][0] + mabangjin[1][0] + mabangjin[2][0];

	temp5 = mabangjin[0][1] + mabangjin[1][1] + mabangjin[2][1];

	temp6 = mabangjin[0][2] + mabangjin[1][2] + mabangjin[2][2]; 

    temp7 = mabangjin[1][1] + mabangjin[0][0] + mabangjin[2][2];

    temp8 = mabangjin[1][1] + mabangjin[0][2] + mabangjin[2][0];
  
    if(temp1 == temp2 && temp1 == temp3 &&temp1 == temp4 &&temp1 == temp5 &&temp1 == temp6 &&temp1 == temp7 &&temp1 == temp8) answer = 'O';
    else answer = 'X';
    
   /* printf("%d\n",temp1);
    printf("%d\n",temp2);
    printf("%d\n",temp3);
    printf("%d\n",temp4);
    printf("%d\n",temp5);
    printf("%d\n",temp6);
    printf("%d\n",temp7);
    printf("%d\n",temp8);*/
    
	printf("%c\n",answer);

	return 0;
}
