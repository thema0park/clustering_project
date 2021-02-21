#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int a, b;
	int out;
    
	scanf("%c %d %d", &gender, &a, &b);
    if(gender == 'W'){
        if(a==1||a==3){
            if(b==1){
                out=1;
            }
            else if(b==2||b==5){
                out=2;
            }
            else if(b==3||b==4){
                out=3;
            }
            
        }
        else if(a==2||a==4){
            if(b==1||b==4){
                out=2;
            }
            else if(b==2){
                out=3;
            }
            else if(b==3){
                out=4;
            }
            else if(b==5){
                out=1;
            }
        }
        else if(a==5){
            if(b==1||b==4){
                out=3;
            }
            else if(b==2||b==3){
                out=4;
            }
            else if(b==5){
                out=2;
            }
        }
    }
    if(gender == 'M'){
        if(a==1||a==3){
            if(b==1||b==4){
                out=2;
            }
            else if(b==2||b==3){
                out=3;
            }
            else if(b==5){
                out=1;
            }
        }
        else if(a==2||a==4){
            if(b==2||b==5){
                out=2;
            }
            else if(b==3||b==4){
                out=3;
            }
            else if(b==1){
                out=1;
            }
        }
        else if(a==5){
            if(b==2||b==5){
                out=3;
            }
            else if(b==3||b==4){
                out=4;
            }
            else if(b==1){
                out=2;
            }
        }
    }
	

	printf("%d\n", out);
	return 0;
}