#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if (gender == 'M') {
        if (l < 3) {
            if (f == 2 || f == 4) out = l;
            else out = l+1;
        }
        else if (l > 3) {
            l = 6-l;
            if (f == 2 || f == 4) out = l+1;
            else if (f == 5) out = l+2;
            else out = l;
        }
        else {
            if (f == 5) out = l+1;
            else out = l;
        }
    }

    else {
        if (l < 3) {
            if (f == 2 || f == 4) out = l+1;
            else if (f == 5) out = l+2;
            else out = l;
        }
        else if (l > 3) {
            l = 6-l;
            if (f == 2 || f == 4) out = l;
            else if (f == 5) out = l+1;
            else out = l+1;
        }
        else {
            if (f == 5) out = l+1;
            else out = l;
        }
    }
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}