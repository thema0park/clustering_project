#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>

int a[6][7] = {};

int main()
{
	char gender;
	int f, l;
	int min = 999;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    a[1][0] = 2, a[3][0] = 2; a[4][6] = 2; a[2][6] = 2;
    a[2][0] = 1; a[4][0] = 1; a[1][6] = 1; a[3][6] = 1;
    if(gender == 'M'){
        int i;
        int boy[4][2] = {1,6,2,0,3,6,4,0};
        for(i = 0; i<4; i++){
            if(abs(f-boy[i][0]) + abs(l-boy[i][1]) < min) min = abs(f-boy[i][0]) + abs(l-boy[i][1]);
        }
    }
    if(gender == 'W'){
        int i;
        int girl[4][2] = {1,0,2,6,3,0,4,6};
        for(i = 0; i<4; i++){
            if(abs(f-girl[i][0]) + abs(l-girl[i][1]) < min) min = abs(f-girl[i][0]) + abs(l-girl[i][1]);
        }
    }


	
	////////////////////////////////////////

	printf("%d\n", min);
	return 0;
}