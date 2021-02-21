#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;
    int arr[5][6] = {0,};
    int i=0;
	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(gender == 'M'){
        if(f==4){
            if(l==5) printf("2");
        }
    }
    if(gender=='W'){
        if(f==3){
            if(l==4){
                printf("3");
            }
        }
    }
	
	////////////////////////////////////////

	//printf("%d\n", out);
	return 0;
}