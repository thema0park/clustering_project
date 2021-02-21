#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////

    int t[5][7] = {
        {1, 2, 3, 4, 4, 3, 2},
        {0, 1, 2, 3, 3, 2, 1},
        {1, 2, 3, 3, 2, 1, 0},
        {0, 1, 2, 3, 3, 2, 1},
        {1, 2, 3, 3, 2, 1, 0}
    };
    if(gender=='M'){
        out = t[5-f][l];
    }else{
        out = t[5-f][6-l];
    }
	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}