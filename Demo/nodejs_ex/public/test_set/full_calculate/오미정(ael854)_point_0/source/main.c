#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define SIZE 10


int main()
{
    int i, j;
    int n=0;
    int m=0;
	int byte[2][9];
	int out[SIZE+1];

	scanf("%s %s", byte[0], byte[1]);
 for(j=8; j>0; j--)
    {
        if(byte[0][j] + byte[1][j] == 0)
           {
               out[j] == 0;
            }
        if(byte[0][j] + byte[1][j] == 1)
        {
            out[j] == 1;
        }
        if(byte[0][j] + byte[1][j] == 2)
        {
            out[j] == 0;
            byte[0][j-1]++;
        }
        if(byte[0][j] + byte[1][j] == 3)
        {
            out[j] == 1;
            byte[0][j-1]++;
        }
    }
   printf("%s", out);

	
  


	return 0;
}
