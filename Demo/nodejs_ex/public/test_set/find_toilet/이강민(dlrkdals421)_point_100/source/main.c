#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(l==3){
        switch(f){
            case 5 : {
                out=4;
                break;
            }
            default : {
                out=3;
                break;
            }
        }
    }
    if((l==0)||(l==1)||(l==2)){
        if(gender=='M'){
            switch(f){
                case 5 : {
                     out=l+1;
                        break;
                    }
                case 1 : {
                    out=l+1;
                    break;
                }
                case 3 : {
                    out=l+1;
                    break;
                }
                case 2 : {
                    out=l;
                    break;
                }
                case 4 : {
                    out=l;
                    break;
                }
            }
        }
        if(gender=='W'){
            switch(f){
                case 5 : {
                    out=l+2;
                    break;
                }
                case 1 : {
                    out=l;
                    break;
                }
                case 3 : {
                    out=l;
                    break;
                }
                case 2 : {
                    out=l+1;
                    break;
                }
                case 4 : {
                    out=l+1;
                    break;
                }
            }
        }
    }
    if((l==4)||(l==5)||(l==6)){
        if(gender=='M'){
            switch(f){
                case 5 : {
                    out=6-l+2;
                    break;
                }
                case 1 : {
                    out=6-l;
                    break;
                }
                case 3 : {
                    out=6-l;
                    break;
                }
                case 2 : {
                    out=6-l+1;
                    break;
                }
                case 4 : {
                    out=6-l+1;
                    break;
                }
            }
        }
        if(gender=='W'){
            switch(f){
                case 5 : {
                    out=6-l+1;
                    break;
                }
                case 1 : {
                    out=6-l+1;
                    break;
                }
                case 3 : {
                    out=6-l+1;
                    break;
                }
                case 2 : {
                    out=6-l;
                    break;
                }
                case 4 : {
                    out=6-l;
                    break;
                }   
            }
        }
    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}