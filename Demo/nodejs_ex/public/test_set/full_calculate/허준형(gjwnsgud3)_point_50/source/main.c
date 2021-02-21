#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[2][9];
	char out[9];
    char New[9];
    int i=0;
	scanf("%s %s", byte[0], byte[1]);

    char other[9];
    
	////////////////////////////////////////
   
    for(i=0; i<8; i+=1){
        if(byte[0][i]=='0'&&byte[1][i]=='0'){
            out[i] = '0';
        }
        else if((byte[0][i]=='1'&&byte[1][i]=='0') || (byte[0][i]=='0'&&byte[1][i]=='1')){
            out[i] = '1';
        }
        else if(byte[0][i]=='1'&&byte[1][i]=='1'){
            out[i] = '0';
            if(i>0){
            out[i-1] = '1';
            }
        }
    }
 
	////////////////////////////////////////

	printf("%s\n", out); // out

	return 0;
}










/*   while(1){
        if(i<=0) break;
           if(byte[0][i]=='0'&&byte[1][i]=='0'){
                out[i] = '0';
                other[i] = '0';
                i = i - 1;
            }
            else if((byte[0][i]=='1'&&byte[1][i]=='0') || (byte[0][i]=='0'&&byte[1][i]=='1')){
             out[i] = '1';
             other[i] = '0';
             i = i - 1;
            }
            else if(byte[0][i]=='1'&&byte[1][i]=='1'){
                out[i] = '0';
                out[i-1] = '1';
                i = i -2;
            }
        }
    




*/