#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;
    int count;
	scanf("%c %d %d", &gender, &f, &l);
    
    if(f==1||3){
        if(gender=='W'){
            if(l==1){
                out=1;
            }
            else if(l==2){
                out=2;
            }
            else if(l==3){
                out=3;
            }
            else if(l==4){
                out=3;
            }
            else if(l==5){
                out=2;
            }
        }
        else if(gender=='M'){
            if(l==1){
                out=2;
            }else if(l==2){
                out=3;
            }else if(l==3){
                out=3;
            }else if(l==4){
                out=2;
            }else if(l==5){
                out=1;
            }
        }
    }else if(f==2 || f==4){
        if(gender=='W'){
            if(l==1){
                out=2;
            }else if(l==2){
                out=3;
            }else if(l==3){
                out=3;
            }else if(l==4){
                out=2;
            }else if(l==5){
                out=1;
            }
        }else if(gender=='M'){
            if(l==1){
                out=1;
            }else if(l==2){
                out=2;
            }else if(l==3){
                out=3;
            }else if(l==4){
                out=3;
            }else if(l==5){
                out=2;
            }
        }
    }else if(f==5){
        if(gender=='M'){
            if(l==1){
                out=2;
            }else if(l==2){
                out=3;
            }else if(l==3){
                out=4;
            }else if(l==4){
                out=4;
            }else if(l==5){
                out=3;
            }
        }else if(gender=='W'){
            if(l==1){
                out=3;
            }else if(l==2){
                out=4;
            }else if(l==3){
                out=4;
            }else if(l==4){
                out=3;
            }else if(l==5){
                out=2;
            }
        }
    }
    

	printf("%d\n", out);
	return 0;
}