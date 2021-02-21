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
    int i=0, j;
    len = strlen(input);
    encoded_len = 0;
    while(input[i]!=NULL)
    {
        num=1;
        if(input[i]!=input[i+1])
        {
            output[encoded_len]=input[i];
            encoded_len++;
            i++;
        }
        else
        {
            for(j=0;j<len-i;j++)
            {
                if(input[j]==input[j+1])
                {
                    num++;
                    i++;
                }
                else{
                    i++;
                    break;
                }
            }
            output[encoded_len] = num;
            output[encoded_len+1] = input[i];
            encoded_len += 2;
        }
    }



	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
