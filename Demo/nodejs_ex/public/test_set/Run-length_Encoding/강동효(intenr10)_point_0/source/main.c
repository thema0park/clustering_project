#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    int i = 0;
    int count =0;
	scanf("%s", input);
	printf("%s\n", input);
    while(1)
    {
        for(i =0; i <MAX_LEN; i++)
        {
        while(strcmp(input[i], input[i+1]) == 0)
        {
          count++;
          printf("%d", count);
          break;
        }       
        }
    }
	//printf("%s\n", output);

	//printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
