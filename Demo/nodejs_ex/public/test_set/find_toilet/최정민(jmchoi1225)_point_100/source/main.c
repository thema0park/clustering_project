#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(l == 3){
        if(f==5){
            out = 4;
        }else{
            out = 3;
        }
        
    }
    else if(l>3){
        out = 6-l;
        if(gender == 'M'){
            if (f == 5) out += 2;
            else if (f%2==0){
                out +=1;
            }
        }else{
            if (f == 5) out += 1;
            else if (f%2==1){
                out +=1;
            }
        }
    }else{
        out = l;
        if(gender == 'M'){
            if (f == 5) out += 1;
            else if (f%2==1){
                out +=1;
            }
        }else{
            if (f == 5) out += 2;
            else if (f%2==0){
                out +=1;
            }
        }
    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}