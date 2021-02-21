#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);
   
    if(gender=='M'){
        if(l==1){
            if(f==2||f==4){
                printf("1\n");
            }
            else if(f==1||f==3||f==5){
                printf("2\n");
            }
        }
        else if(l==2){
            if(f==2||f==4){
                printf("2\n");
            }
            else if(f==5){
                printf("3\n");
            }
            else{
                printf("3\n");
            }
        }
        else if(l==3){
            if(f==2||f==4||f==1||f==3){
                printf("3\n");
            }
            else if(f==5){
                printf("4\n");
            }
        }
        else if(l==4){
            if(f==1||f==3){
                printf("2\n");
            }
            else if(f==5){
                printf("5\n");
            }
            else{
                printf("3\n");
            }
        }
        else if(l==5){
            if(f==1||f==3){
                printf("1\n");
            }
            else if(f==2||f==4){
                printf("2\n");
            }
        }
    }
    else{
        if(l==1){
            if(f==2||f==4){
                printf("2\n");
            }
            else if(f==1||f==3){
                printf("1\n");
            }
            else{
                printf("3\n");
            }
        }
        else if(l==3){
            if(f==2||f==4||f==1||f==3){
                printf("3\n");
            }
            else if(f==5){
                printf("4\n");
            }
        }
        else if(l==2){
            if(f==1||f==3){
                printf("2\n");
            }
            else if(f==5){
                printf("4\n");
            }
            else{
                printf("3\n");
            }
        }
        else if(l==4){
            if(f==1||f==3){
                printf("3\n");
            }
            else if(f==5){
                printf("3\n");
            }
            else{
                printf("2\n");
            }
        }
        else if(l==5){
            if(f==2||f==4){
                printf("1\n");
            }
            else if(f==1||f==3||f==5){
                printf("2\n");
            }
        }
    }

	////////////////////////////////////////


	
	////////////////////////////////////////

	//printf("%d\n", out);
	return 0;
}