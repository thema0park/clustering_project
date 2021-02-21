#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{   int i;
    int up=0;
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);
    for(i=8; i>=0; i--){
        if(up==1){
            if((byte[0][i]-'0')+(byte[1][i]-'0')==2){
                out[i]='1';
            }
            else if((byte[0][i]-'0')+(byte[1][i]-'0')==1){
                out[i]='0';

            }
            else if((byte[0][i]-'0')+(byte[1][i]-'0')==0){
                out[i]='1';
                up=0;
            }
        }
        else if((byte[0][i]-'0')+(byte[1][i]-'0')==2){
            up=1;
            out[i]='0';

        }
        else if((byte[0][i]-'0')+(byte[1][i]-'0')==1){
            out[i]='1';
        }
        else if((byte[0][i]-'0')+(byte[1][i]-'0')==0){
            out[i]='0';

        }
	////////////////////////////////////////
        if(i==0){
            if((byte[0][i]-'0')+(byte[1][i]-'0')+up==2){
                out[i]='0';

            }
            else if((byte[0][i]-'0')+(byte[1][i]-'0')+up==1){
                out[i]='1';

            }
            else if ((byte[0][i]-'0')+(byte[1][i]-'0')+up==0){
                out[i]='0';

            }

        }
    }

	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
