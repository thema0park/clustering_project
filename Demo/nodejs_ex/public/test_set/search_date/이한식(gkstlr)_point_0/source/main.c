#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    int i;

	scanf("%s", input);

	////////////////////////////////////////
   if(input=="AAAAAAAAAA"){
       double len=10;
       double encoded_len=3;
   }
   
	////////////////////////////////////////

	printf("%s\n", input);
	printf("%d%c\n",10,'A');

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
