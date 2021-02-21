#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;

	scanf("%s", input);

	////////////////////////////////////////
    len=strlen(input); //'0'=48
    char temp;
    int k, l, count;
    for(k=0; k<len; k++)
    {
        if(input[k]<65 || input[k]>90)
        printf("Input Error");
        return 0;
    }
    for(k=0; k<len; k+=l)
    {
        temp=input[k];
        count=1;
        for(l=1; temp==input[k+l]; l++)
        {
            count++;
        }
    }

	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
