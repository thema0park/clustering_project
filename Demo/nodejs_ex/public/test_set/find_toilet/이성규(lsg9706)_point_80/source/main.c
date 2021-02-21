#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out=0;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if (gender-'M'==0){
        if(l>3){
            out=out+6-l;
            if(f==5||f==4){
                out=out+f-3;
            }
            else if(f==2){
                out=out+1;
            }
            else
                ;        
        }
        else if(l<3){
            out=out+l;
            if(f==3||f==5||f==1){
                out=out+1;
            }
            else
                ;
        }
        else
            out=out+3;
            if(f==5){
                out=out+1;
            }
            else
                ;
    }

    if (gender-'W'==0){
        if(l<3){
            out=out+l;
            if(f==5||f==4){
                out=out+f-3;
            }
            else if(f==2){
                out=out+1;
            }
            else
                ;        
        }
        else if(l>3){
            out=out+6-l;
            if(f==3||f==5||f==1){
                out=out+1;
            }
            else
                ;
        }
        else
            out=out+3;
            if(f==5){
                out=out+1;
            }
            else
                ;
    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}