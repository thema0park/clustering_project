#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    int i, j;
    int olim=0;
    int err = 0;
   
    
    for (i =BYTE_SIZE-1; i>=0; i--){

       if (olim == 1){
           if (byte[1][i]=='1' && byte[0][i]=='1'){
               out[i] = '1';

           }
           else if ((byte[1][i]=='0' && byte[0][i]=='1')||(byte[1][i]=='1' && byte[0][i]=='0')){
               out[i]= '0';
              
           }
           else if ((byte[1][i]=='0' && byte[0][i]=='0')) {
               out[i]='1';
               olim = 0;
           }
           else err=1;
       }
       else if (olim == 0){
           if (byte[1][i]=='1' && byte[0][i]=='1'){
               out[i] = '0';
            olim =1;
           }
            else if ((byte[1][i]=='0' && byte[0][i]=='1')||(byte[1][i]=='1' && byte[0][i]=='0')){
               out[i]= '1';
           }
           else if ((byte[1][i]=='0' && byte[0][i]=='0')) {
               out[i]='0';
               olim = 0;
           }
           else err =1;
       }
        
    }
   
	////////////////////////////////////////
    if (err ==0){
	    printf("%s\n", out);
    }
    else if  (err==1){
        printf("Input Error\n");
    }
    
	return 0;
}
