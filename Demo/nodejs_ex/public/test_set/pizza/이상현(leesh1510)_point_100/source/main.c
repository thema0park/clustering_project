#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char gender;
	int f, l;
	int out;
    out=0;
	scanf("%c %d %d",&gender, &f, &l);
    if (l==1){
        if (gender=='M'){
            if ((f==2)||(f==4)) out=1;
            else if ((f==1)||(f==3)) out=2; 
            else out=2;
        }
        if (gender=='W'){
            if ((f==2)||(f==4)) out=2;
            else if ((f==1)||(f==3)) out=1;
            else out=3;
        }
    }
    else if (l==2){
         if (gender=='M'){
            if ((f==2)||(f==4)) out=2;
            else if ((f==1)||(f==3)) out=3;
            else out=3;
        }
        if (gender=='W'){
            if ((f==2)||(f==4)) out=3;
            else if ((f==1)||(f==3)) out=2;
            else out=4;
        }
    }
    else if (l==3){
        if (f<5) out=3;
        else out=4;
    }
    else if (l==4){
         if (gender=='M'){
            if ((f==2)||(f==4)) out=3;
            else if ((f==1)||(f==3)) out=2;
            else out=4;
        }
        if (gender=='W'){
            if ((f==2)||(f==4)) out=2;
            else if ((f==1)||(f==3)) out=3;
            else out=3;
        }
    }
    else{//l==5
        if (gender=='M'){
            if ((f==2)||(f==4)) out=2;
            else if ((f==1)||(f==3)) out=1; 
            else out=3;
        }
        if (gender=='W'){
            if ((f==2)||(f==4)) out=1;
            else if ((f==1)||(f==3)) out=2;
            else out=2;
        }
    }
	printf("%d\n", out);

	return 0;
}