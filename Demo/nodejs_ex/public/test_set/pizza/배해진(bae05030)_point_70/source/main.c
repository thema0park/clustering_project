#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);
    if(gender=='M'){
        if(f==5&&l<=3){
            printf("%d\n",l+1);
        }else if(f==5&&l>3){
            printf("%d\n",8-l);
        }else if(f%2==1&&l<=2){
            printf("%d\n",4-l);
        }else if(f%2==1&&l>2){
            printf("%d\n",6-f);
        }else if(f%2==0&&l<=3){
            printf("%d\n",l);
        }else if(f%2==0&&l>3){
            printf("%d\n",6-l+1);
        }
    }else{
       if(f==5&&l<=2){
            printf("%d\n",l+2);
        }else if(f==5&&l>3){
            printf("%d\n",8-l-1);
        }else if(f%2==0&&l<=2){
            printf("%d\n",4-l);
        }else if(f%2==0&&l>2){
            printf("%d\n",6-f);
        }else if(f%2==1&&l<=3){
            printf("%d\n",l);
        }else if(f%2==1&&l>3){
            printf("%d\n",6-l+1);
        }
    }

	//printf("%d\n", out);
	return 0;
}