#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;
    int n,m,w;
    int i,j;
    int bath[4][6] = {
        {n,0,0,0,0,0,n},
        {m,0,0,0,0,0,w},
        {w,0,0,0,0,0,m},
        {m,0,0,0,0,0,w},
        {w,0,0,0,0,0,m}
    };
	scanf("%c %d %d", &gender, &f, &l);
    
    if(l==0){
        if(f==5){
            if(gender=='m'){
                out = 1;
            }
            else out  = 2;
        }
        else if(f==4){
            if(gender=='m'){
                out = 0;
            }
            else out  = 1;
        }
        else if(f==3){
            if(gender=='m'){
                out = 1;
            }
            else out  = 0;
        }
        else if(f==2){
            if(gender=='m'){
                out = 0;
            }
            else out  = 1;
        }
        else if(f==1){
            if(gender=='m'){
                out = 1;
            }
            else out  = 0;
        }
        
    }
    else if(l==1){
         if(f==5){
            if(gender=='m'){
                out = 2;
            }
            else out  = 3;
        }
        else if(f==4){
            if(gender=='m'){
                out = 1;
            }
            else out  = 2;
        }
        else if(f==3){
            if(gender=='m'){
                out = 2;
            }
            else out  = 1;
        }
        else if(f==2){
            if(gender=='m'){
                out = 1;
            }
            else out  = 2;
        }
        else if(f==1){
            if(gender=='m'){
                out = 2;
            }
            else out  = 1;
        }
    }
    else if(l==2){
         if(f==5){
            if(gender=='m'){
                out = 3;
            }
            else out  = 4;
        }
        else if(f==4){
            if(gender=='m'){
                out = 2;
            }
            else out  = 3;
        }
        else if(f==3){
            if(gender=='m'){
                out = 3;
            }
            else out  = 2;
        }
        else if(f==2){
            if(gender=='m'){
                out = 2;
            }
            else out  = 3;
        }
        else if(f==1){
            if(gender=='m'){
                out = 3;
            }
            else out  = 2;
        }
    }
    else if(l==3){
        if(f==5){
            out = 4;
        }
        else {
            out = 3;
        }
    }
    else if(l==4){
         if(f==5){
            if(gender=='m'){
                out = 4;
            }
            else out  = 3;
        }
        else if(f==4){
            if(gender=='m'){
                out = 3;
            }
            else out  = 2;
        }
        else if(f==3){
            if(gender=='m'){
                out = 2;
            }
            else out  = 3;
        }
        else if(f==2){
            if(gender=='m'){
                out = 3;
            }
            else out  = 2;
        }
        else if(f==1){
            if(gender=='m'){
                out = 2;
            }
            else out  = 3;
        }
    }
    else if(l==5){
         if(f==5){
            if(gender=='m'){
                out = 3;
            }
            else out  = 2;
        }
        else if(f==4){
            if(gender=='m'){
                out = 2;
            }
            else out  = 1;
        }
        else if(f==3){
            if(gender=='m'){
                out = 1;
            }
            else out  = 2;
        }
        else if(f==2){
            if(gender=='m'){
                out = 2;
            }
            else out  = 1;
        }
        else if(f==1){
            if(gender=='m'){
                out = 1;
            }
            else out  = 2;
        }
    }
    else if(l==6){
         if(f==5){
            if(gender=='m'){
                out = 2;
            }
            else out  = 1;
        }
        else if(f==4){
            if(gender=='m'){
                out = 1;
            }
            else out  = 0;
        }
        else if(f==3){
            if(gender=='m'){
                out = 0;
            }
            else out  = 1;
        }
        else if(f==2){
            if(gender=='m'){
                out = 1;
            }
            else out  = 0;
        }
        else if(f==1){
            if(gender=='m'){
                out = 0;
            }
            else out  = 1;
        }
    }


	printf("%d\n", out);
	return 0;
}











     /*   if(l=3){
        if(f=5){
            out = 4;
        }
        out = 3;
    }
        else if(l=0){
            if(f=1 && gender = w){
                out = 0;
            }
            else out = 1;
            if(f=2 && gender = m){
                out = 0;
            }
            else out = 1;
            if(f=3 && gender = w){
                out = 0;
            }
            else out = 1;
            if(f=4 && gender = m){
                out = 0;
            }
            else out = 1;
            if(f=5 && gender = m){
                out = 1;
            }
            else out = 2;

        }

        else if(l=1){
            if(f = 5){
            if(gender = m){
                out = 2;
            }
            else{
                out = 3;
            }
        }
        else if(f=4){
            if(gender = m)
            {
                out = 1;
            }
            else{
                out = 2;
            }
        }
        else if(f=3){
            if(gender = m)
            {
                out = 2;
            }
            else{
                out = 1;
            }
        }
        else if(f=2){
            if(gender = m)
            {
                out = 1;
            }
            else{
                out = 2;
            }
        }
        else if(f=1){
            if(gender = m)
            {
                out = 2;
            }
            else{
                out = 1;
            }
        }
    }
    else if(l=2)*/


	
	////////////////////////////////////////

