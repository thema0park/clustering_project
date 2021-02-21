#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
int flag = 1;
int i ;
int j; 
int sum = 0;
int line = 0;

for(i = 0 ; i < 3 ; i++) {

    sum+=mabangjin[0][i];
}

for(i = 0 ; i < 3 ; i ++) {
    line = 0;
    for( j = 0 ; j < 3 ; j++) {
        line+=mabangjin[i][j];
    }
    if(line != sum) flag = 0;
}
for(i = 0 ; i < 3 ; i ++) {
    line = 0;
    for( j = 0 ; j < 3 ; j++) {
        line+=mabangjin[j][i];
    }
    if(line != sum) flag = 0;
}
line = 0;
for(i = 0, j = 0 ; i < 3 ; i ++ , j++) {
line+=mabangjin[i][j];
    
}
 if(line != sum) flag = 0;
 line = 0;
 for(i = 0 , j = 2; i < 3 ; i ++, j--) {
     line += mabangjin[i][j];
 }
  if(line != sum) flag = 0;
  
if (flag == 1) answer = 'O';
else answer = 'X';
	////////////////////////////////////////
  printf("%c\n" , answer);

	return 0;
}
