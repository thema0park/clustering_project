#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char gender;
	int f, l;
	int out;
    int i,j;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(gender=='M'){
       if(f%2==0){
           if(l<=3) out = l;
           else out=7-l;
       }
       else if(f==5){
           if(l<=3) out =l+1;
           else out=8-l;
       }
       else{
           if(l>=3) out=l;
           else out=7-l;
       }
    }
    else{
       if(f%2==1){
           if(l<=3) out = l;
           else out=7-l;
       }
       else if(f==5){
           if(l<=3) out =l+1;
           else out=8-l;
       }
       else{
           if(l>=3) out=l;
           else out=7-l;
       }
    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}