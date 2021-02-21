#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(l==0){
        if(gender=='M'){
            if(f%2==1)out=1;
            if(f%2==0)out=0;
        }
        if(gender=='W'){
            if(f%2==1&&f!=5)out=0;
            if(f==5)out=2;
            if(f%2==0)out=1;
        }
    }
    if(l==6){
        if(gender=='W'){
            if(f%2==1)out=1;
            if(f%2==0)out=0;
        }
        if(gender=='M'){
            if(f%2==1&&f!=5)out=0;
            if(f==5)out=2;
            if(f%2==0)out=1;
        }
    }
    if(l==1){
        if(gender=='M'){
            if(f%2==1)out=1+l;
            if(f%2==0)out=0+l;
        }
        if(gender=='W'){
            if(f%2==1&&f!=5)out=0+l;
            if(f==5)out=2+l;
            if(f%2==0)out=1+l;
        }
    }
    if(l==5){
        if(gender=='W'){
            if(f%2==1)out=1+1;
            if(f%2==0)out=0+1;
        }
        if(gender=='M'){
            if(f%2==1&&f!=5)out=0+1;
            if(f==5)out=2+1;
            if(f%2==0)out=1+1;
        }
    }
    if(l==2){
        if(gender=='M'){
            if(f%2==1)out=1+l;
            if(f%2==0)out=0+l;
        }
        if(gender=='W'){
            if(f%2==1&&f!=5)out=0+l;
            if(f==5)out=2+l;
            if(f%2==0)out=1+l;
        }
    }
    if(l==4){
        if(gender=='W'){
            if(f%2==1)out=1+2;
            if(f%2==0)out=0+2;
        }
        if(gender=='M'){
            if(f%2==1&&f!=5)out=0+2;
            if(f==5)out=2+2;
            if(f%2==0)out=1+2;
        }
    }
    if(l==3){
        if(f!=5)out=3;
        if(f==5)out=4;
    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}