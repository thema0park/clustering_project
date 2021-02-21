#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int n,m;
	int out;

	scanf("%c %d %d", &gender, &n, &m);

	////////////////////////////////////////
    if(m==0){
        if(gender=='M'){
            if(n%2==0) out=0;
            else out=1;
        }
        else if(gender=='W'){
            if(n%2==0) out=1;
            else{
                if(n==5) out=2;
                else out=1;
            }
        }
    }
    else if(m==6){
        if(gender=='M'){
            if(n%2==0) out=1;
            else{
                if(n==5) out=2;
                else out=1;
            }
        }
        else{
            if(n%2==0) out=0;
            else out=1;
        }
    }
    else if(m>3){
        if(gender=='M'){
            if(n%2==0) out=1+6-m;
            else{
                if(n==5) out=2+6-m;
                else out=6-m;
            }
        }
        else if(gender=='W'){
            if(n%2==0) out=6-m;
            else out=1+6-m;
        }
    }
    else if(m==3){
        if(n==5) out=4;
        else out=3;
    }
    if(m<3){
        if(gender=='M'){
            if(n%2==0) out=m;
            else out=1+m;
        }
        if(gender=='W'){
            if(n%2==0) out=1+m;
            else{
                if(n==5) out=m;
                else out=m;
            }
        }
    }
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}