#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////

     if(gender == 'M' && f == 1 && l == 1){
         out = 2;

     }
     else if(gender == 'M' && f == 1 && l == 2){
         out = 3;

     }
     else if(gender == 'M' && f == 1 && l == 3){
         out = 3;

     }
     else if(gender == 'M' && f == 1 && l == 4){
         out = 2;

     }
     else if(gender == 'M' && f == 1 && l == 5){
         out =1;

     }
     else if(gender == 'M' && f == 2 && l == 1){
         out = 1;

     }
     else if(gender == 'M' && f == 2 && l == 2){
         out=2;

     }
     else if(gender == 'M' && f == 2 && l == 3){
         out = 3;

     }
     else if(gender == 'M' && f == 2 && l == 4){
         out = 3;
    

     }
     else if(gender == 'M' && f == 2 && l == 5){
         out = 2;

     }
     else if(gender == 'M' && f == 3 && l == 1){
         out = 2;

     }
     else if(gender == 'M' && f == 3 && l == 2){
         out = 3;

     }
     else if(gender == 'M' && f == 3 && l == 3){
         out = 3;

     }
     else if(gender == 'M' && f == 3 && l == 4){
         out = 2;

     }
     else if(gender == 'M' && f == 3 && l == 5){
         out = 1;

     }

      else if(gender == 'M' && f == 4 && l == 1){
         out = 1;

     }
     else if(gender == 'M' && f == 4 && l == 2){
         out = 2;

     }
     else if(gender == 'M' && f == 4 && l == 3){
         out = 3;

     }
     else if(gender == 'M' && f == 4 && l == 4){
         out = 3;

     }
     else if(gender == 'M' && f == 4 && l == 5){
         out = 2;
     }

     else if(gender == 'W' && f == 1 && l == 1){
         out = 1;

     }
     else if(gender == 'W' && f == 1 && l == 2){
         out = 2;

     }
     else if(gender == 'W' && f == 1 && l == 3){
         out = 3;

     }
     else if(gender == 'W' && f == 1 && l == 4){
         out = 3;

     }
     else if(gender == 'W' && f == 1 && l == 5){
         out = 2;
     }

      else if(gender == 'W' && f == 2 && l == 1){
         out = 2;

     }
     else if(gender == 'W' && f == 2 && l == 2){
         out = 3;

     }
     else if(gender == 'W' && f == 2 && l == 3){
         out = 3;

     }
     else if(gender == 'W' && f == 2 && l == 4){
         out = 2;

     }
     else if(gender == 'W' && f == 2 && l == 5){
         out = 1;
     }
     
      else if(gender == 'W' && f == 3 && l == 1){
         out = 1;

     }
     else if(gender == 'W' && f == 3 && l == 2){
         out = 2;

     }
     else if(gender == 'W' && f == 3 && l == 3){
         out = 3;

     }
     else if(gender == 'W' && f == 3 && l == 4){
         out = 3;

     }
     else if(gender == 'W' && f == 3 && l == 5){
         out = 2;
     }

     else if(gender == 'W' && f == 4 && l == 1){
         out = 2;

     }
     else if(gender == 'W' && f == 4 && l == 2){
         out = 3;

     }
     else if(gender == 'W' && f == 4 && l == 3){
         out = 3;

     }
     else if(gender == 'W' && f == 4 && l == 4){
         out = 2;

     }
     else if(gender == 'W' && f == 4 && l == 5){
         out = 1;
     }
     
     else if(gender == 'M' && f == 5 && l == 1){
         out = 2;
     }
     else if(gender == 'M' && f == 5 && l == 2){
         out = 3;
     }
      else if(gender == 'M' && f == 5 && l == 3){
         out = 4;
     }
      else if(gender == 'M' && f == 5 && l == 4){
         out = 4;
     }
     else if(gender == 'M' && f == 5 && l == 5){
         out = 3;
     }

     else if(gender == 'W' && f == 5 && l == 1){
         out = 2;
     }
     else if(gender == 'W' && f == 5 && l == 2){
         out = 3;
     }
      else if(gender == 'W' && f == 5 && l == 3){
         out = 4;
     }
      else if(gender == 'W' && f == 5 && l == 4){
         out = 3;
     }
     else if(gender == 'W' && f == 5 && l == 5){
         out = 2;
     }
     
     
     printf("%d\n",out);
    
	return 0;
}