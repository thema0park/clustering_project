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

int mab[8]={0};

for(l=0; l<3; l++) {
    mab[0] += mabangjin[0][l];
}
for(l=0; l<3; l++) {
    mab[1] += mabangjin[1][l];
}
if(mab[0]!=mab[1]) {answer = 'X'; goto END;}
else{
for(l=0; l<3; l++) {
    mab[2] += mabangjin[2][l];
}
if(mab[0]!=mab[2]) {answer = 'X'; goto END;}
else{
for(l=0; l<3; l++) {
    mab[3] += mabangjin[l][0];
}
if(mab[0]!=mab[3]) {answer = 'X'; goto END;}
else{
for(l=0; l<3; l++) {
    mab[4] += mabangjin[l][1];
}
if(mab[0]!=mab[4]) {answer = 'X'; goto END;}
else{
for(l=0; l<3; l++) {
    mab[5] += mabangjin[l][2];
}
if(mab[0]!=mab[5]) {answer = 'X'; goto END;}
else{
for(l=0; l<3; l++) {
    mab[6] += mabangjin[l][l];
}
if(mab[0]!=mab[6]) {answer = 'X'; goto END;}
else{
for(l=0; l<3; l++) {
    mab[7] += mabangjin[l][2-l];
}
if(mab[0]!=mab[7]) {answer = 'X'; goto END;}
else answer='O';
}
}
}
}
}
}
END:	printf("%c\n",answer);

	return 0;
}
