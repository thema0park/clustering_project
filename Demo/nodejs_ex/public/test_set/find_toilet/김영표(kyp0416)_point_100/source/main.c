#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    char map_m[5][6] = {
        {'W',2,3,3,2,1,'M'},
        {'M',1,2,3,3,2,'W'},
        {'W',2,3,3,2,1,'M'},
        {'M',1,2,3,3,2,'W'},
        {'N',2,3,4,4,3,'N'}
    };
    char map_w[5][6] = {
        {'W',1,2,3,3,2,'M'},
        {'M',2,3,3,2,1,'W'},
        {'W',1,2,3,3,2,'M'},
        {'M',2,3,3,2,1,'W'},
        {'N',3,4,4,3,2,'N'}
    };
	char gender;
	int f, l, i, j, cost_ru = 0, cost_lu = 0, cost_rd = 0, cost_ld = 0;
	int out;

	scanf("%c %d %d", &gender, &f, &l);
	////////////////////////////////////////

    if(gender == 'M'){
        out = map_m[f-1][l];
    }
    else{
        out = map_w[f-1][l];
   }

	////////////////////////////////////////
	printf("%d\n", out);
	return 0;
}