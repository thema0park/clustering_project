#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);
    if(gender=='M'){
        if(f==1||f==3){
            if(l==2||l==3){
                out = 3;
            }
            if(l==1||l==4){
                out = 2;
            }
            if(l==5){
                out = 1;
            }
        }
        if(f==2||f==4){
            if(l==3||l==4){
                out = 3;
            }
            if(l==2||l==5){
                out = 2;
            }
            if(l==1){
                out = 1;
            }
        }
        if(f==5){
            if(l==1){
                out = 2;
            }
            if(l==2||l==5){
                out = 3;
            }
            if(l==3||l==4){
                out = 4;
            }
        }
    }
    else if(gender=='W'){
        if(f==1||f==3){
            if(l==4||l==3){
                out = 3;
            }
            if(l==2||l==5){
                out = 2;
            }
            if(l==1){
                out = 1;
            }
        }
        if(f==2||f==4){
            if(l==2||l==3){
                out = 3;
            }
            if(l==1||l==4){
                out = 2;
            }
            if(l==5){
                out = 1;
            }
        }
        if(f==5){
            if(l==5){
                out = 2;
            }
            if(l==4||l==1){
                out = 3;
            }
            if(l==3||l==2){
                out = 4;
            }
        }
    }
	printf("%d\n", out);
	return 0;
}