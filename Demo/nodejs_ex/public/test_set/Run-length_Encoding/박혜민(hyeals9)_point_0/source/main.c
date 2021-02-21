#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, encoded_len = 0;
    int i=0;
    int num=0;

	scanf("%s", input);

	len=strlen(input);
   
    for(i=1;i<len;i++)
    {
       if(input[i-1]==input[i])
    {
        num++;
    }
        if(input[i-1]!=input[i]&&num>=2)
        {
            output[i-1]=num;
            i++;
            output[i-1]=input[i-1];
        }
        if(input[i-1]!=input[i]&&num==1)
            {
                output[i-1]=input[i-1];
                i++;
                output[i-1]==input[i-1];
            }
        if(input[i-1]!=input[i]&&num==0)
            output[i-1]=input[i-1];
    }
    
    encoded_len=strlen(output);
	
    printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
