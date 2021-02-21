#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////

    if(gender == 'W'){
        if(f==5){
            out++;
            out = out + (6-l);
        }
        else if (f%2 == 0){
            if(l==1 || l==2){
                out ++;
                out=out+l;
            }
            else out = 6-l;
        }
        else if(f%2==1) {
            if(l==5 || l==4){
            out++;
            out = out + (6-l);
            }
            else out = l;
        }
    }

    if(gender == 'M'){
        if(f==5){
            out++;
            out = out + l;
        }
        else if (f%2 == 0){
            if(l==4 || l==5){
                out++;
                out=out+(6-l);
            }
            else out = l;
        }
        else if(f%2==1) {
            if(l==1 || l==2){
                out ++;
                out=out+l;
            }
            else out = 6-l;
        }
    }


	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}