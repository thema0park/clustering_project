#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;

	scanf("%s", input);

	////////////////////////////////////////
    int i,a=0,sum=0;
    for(i=0;i<strlen(input);i++)
    {
        if(input[i]-input[i+1]==0)
        {
            sum++;
        }
         if(input[i]-input[i+1]!=0)
        {
            sum=0;
        }
        
    }


	////////////////////////////////////////
    len=strlen(input);
    encoded_len=strlen(output);
	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
