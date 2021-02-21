#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int a,b,i,d;
    char c = '0';
	scanf("%s %s", byte[0], byte[1]);
    for(a=0;a<8;a++){
        if(byte[0][a]!='0'&&byte[0][a]!='1'){
            b++;
        }
        if(byte[1][a]!='0'&&byte[1][a]!='1'){
            b++;
        }
    }
    if(b>0){
        printf("Input Error");
    }
    else if(b==0){
        for(i=7;i>=0;i--){
            if(byte[0][i]=='1'&&byte[1][i]=='1'){
                if(c=='1'){
                    out[i] = '1';
                }
                else if(c=='0'){
                    out[i] = '0';
                    c='1';
                }
            }
            if(byte[0][i]=='1'&&byte[1][i]=='0'){
                if(c=='1'){
                    out[i] = '0';
                }
                else if(c=='0'){
                    out[i] = '1';
                }
            }
            if(byte[0][i]=='0'&&byte[1][i]=='1'){
                if(c=='1'){
                    out[i] = '0';
                }
                else if(c=='0'){
                    out[i] = '1';
                }
            }
            if(byte[0][i]=='0'&&byte[1][i]=='0'){
                if(c=='1'){
                    out[i] = '1';
                    c='0';
                }
                else if(c=='0'){
                    out[i] = '0';
                }
            }
        }
        printf("%s\n",out);
    }
	return 0;
}
