#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    char Num[3];
    int i=0;
    int j=0;
    int count=0;
	scanf("%s", input);

	////////////////////////////////////////
    for(;input[i]!='\0';i++)
    {
        if(input[i]==input[i+1])
        {
            count++;
        }
        else
        {
           if(count==1)
           {
               output[j]=input[i];
               j++;
               output[j]=input[i];
           }
           else
           {
           if((count+1/10)>0)
           {
               output[j]+=(count+1/10);
                j++;
           }
           output[j]+=(count+1%10);
                j++;
           output[j]=input[i];
            count=0;
           }
        }
    }
    /*for(;j<MAX_LEN;j++)
    {
        output[j]='\0';
    }*/
	////////////////////////////////////////
    len=strlen(input);
    encoded_len=strlen(output);
    printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}