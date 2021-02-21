#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if (gender == 'M'){
        if (l == 3) out = 3;
        else if (((l == 0) && ((f % 2) == 0)) || ((l == 6) && ((f == 3) || (f == 1)))) out = 0;
        else if (l < 3) {            
            if ((f % 2) == 0) out = l;
            else out = l + 1;
        }
        
        else if (l > 3) {            
            if ((f % 2) == 0) {
                out = 7 - l;
            }            
            else out = 6 - l;
        }
        if (f == 5) {
            if (l == 6) out++;
            if (l != 0) out++;
        }
        
    }

    else {
        if (l == 3) out = 3;
        else if (((l == 6) && ((f % 2) == 0)) || ((l == 0) && ((f == 3) || (f == 1)))) out = 0;
        else if(l < 3){
            if ((f % 2) == 0) out = l + 1;
            else out = l;
        }
        else if (l > 3) {
            if ((f % 2) == 0) out = 6 - l;
            else out = 7 - l;
        }
        if (f == 5) {
            if (l == 0) out++;
            if (l != 6) out++;
        }
    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}