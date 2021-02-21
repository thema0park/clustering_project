#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    char a[BYTE_SIZE+1]={0};
    int i;
    int j;
	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    for(j=0;j<=BYTE_SIZE;j++){
        if(byte[0][i]=='0'||byte[1][i]=='0')
            ;
        else if(byte[0][i]=='1'||byte[1][i]=='1')
            ;
        else{
            printf("Input Error\n");
            break;
        }
    }


    for(i=7;i>=0;i--){
        if(byte[0][i]=='1'&&byte[1][i]=='1'){
            if(a[i]=='1'){
                a[i-1]='1';
                out[i]='1'; 
            }
            else{
            a[i-1]='1';
            out[i]='0';
            }

        }
        else if(byte[0][i]=='1'&&byte[1][i]=='0'){
            if(a[i]=='1'&&i!=0){
                out[i]='0';
                a[i-1]='1';
            }
            else
            out[i]='1';
        }
        else if(byte[0][i]=='0'&&byte[1][i]=='1'){
            if(a[i]=='1'&&i!=0){
                out[i]='0';
                a[i-1]='1';
             }
            else
            out[i]='1';
        }  
        else{
            if(a[i]=='1'&&i!=0){
                out[i]='1';
            }
            else
            out[i]='0';
        }  
    }

	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
