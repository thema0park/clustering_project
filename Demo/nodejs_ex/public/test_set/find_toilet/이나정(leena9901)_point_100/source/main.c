#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    int mm[6][6]={{2,3,4,4,3},{1,2,3,3,2},{2,3,3,2,1},{1,2,3,3,2},{2,3,3,2,1}};
    int ww[6][6]={{3,4,4,3,2},{2,3,3,2,1},{1,2,3,3,2},{2,3,3,2,1},{1,2,3,3,2}};
    
    if (gender=='M'){
        out=mm[5-f][l-1];
    }
    else{
        out=ww[5-f][l-1];
    }
	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}