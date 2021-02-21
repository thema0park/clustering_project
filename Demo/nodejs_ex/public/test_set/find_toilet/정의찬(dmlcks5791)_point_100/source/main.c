#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;
    char arr[6][2] = {0, };

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    arr[1][0] = arr[2][1] = arr[3][0] = arr[4][1] = 'W';
    arr[1][1] = arr[2][0] = arr[3][1] = arr[4][0] = 'M';

    if(l == 3)
        out = 3;
    else if(l == 2 || l == 4)
        out = 2;
    else if(l == 1 || l == 5)
        out = 1;
    else if(l == 0 || l == 6)
        out = 0;
    
    if(f == 5)
    {
        out++;
        f--;
    }

    if(l < 3 && arr[f][0] != gender)
        out++;
    else if(3 < l && arr[f][1] != gender)
        out++;

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}