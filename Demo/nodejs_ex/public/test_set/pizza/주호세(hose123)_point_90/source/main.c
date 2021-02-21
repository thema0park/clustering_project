#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(gender=='M'){
        if(f==5){
            if(l<=3)
                out=1+l;
            else
                out=2+(6-l);
        }
        else if(f%2==0){
            if(l<=3)
                out=l;
            else
                out=1+(6-l);
        }
        else if((f==4||f==2)&&l==0)
            out=0;
        else if((f==3||f==1)&&l==6)
            out=0;
        else{
            if(l<=3)
                out=1+l;
            else
                out=6-l;
        }

        
    }
    else if(gender=='W'){
        if(f==5){
            if(l<=3){
                out=2+l;
            }
            else
                out=1+(6-l);
        }
        else if(f%2==0){
            if(l<=3)
                out=1+l;
            else
                out=6-l;
        }
        else if((f==3||f==1)&&l==0)
            out=0;
        else if((f==4||f==2)&&l==6)
            out=0;
        else{
            if(l<=3)
                out=l;
            else
                out=1+(6-l);
        }

    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}