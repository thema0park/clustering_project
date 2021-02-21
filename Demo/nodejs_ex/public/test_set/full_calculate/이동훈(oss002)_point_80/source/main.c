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
    char fake[BYTE_SIZE+1];
    fake[7] = '0';
    int i;
    int j;

    int up;




    while(1) {
        up = 0;
        for (i = 7; i > -1; i--) {
            if ((int)byte[0][i] + (int)byte[1][i] - 96 == 0) {
                out[i] = '0';
                fake[i-1] = '0';
            }
            else if ((int)byte[0][i] + (int)byte[1][i] - 96 == 1) {
                out[i] = '1';
                fake[i-1] = '0';
            }
            else if((int)byte[0][i] + (int)byte[1][i] -96 == 2) {
                out[i] = '0';
                if (i != 0) { 
                    fake[i-1] = '1';
                }
                up = 1;
            }
            
        }

        //printf("%s %s\n", out,fake);

        if(up == 0) {
            break;
        }
        if(up == 1) {
            for(j = 0; j <8; j++) {
                byte[0][j] = out[j];
                byte[1][j] = fake[j];
            }
        }

        //printf("%s %s\n", byte[0],byte[1]);

    }

    


	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
