#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#define MAX_LEN 101
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
    char TEMP[MAX_LEN];
	int len, num, encoded_len = 0;
    int i = 0,cnt = 0;
	scanf("%s", input);
    for(i = 0;input[i]!='\0';i++)
    {
        if(!(input[i] >= 'A' && input[i] <= 'Z'))
        {       
            printf("Input Error\n");
            return 0;
        }
    }
 //printf("%d",strlen(input));
	////////////////////////////////////////
    strcpy(output,"");
   
    for(i = 0;i<strlen(input);i++)
    {
        if(input[i] == input[i+1])
            cnt++;
        else
        {
            //printf("%d%c",cnt+1,input[i]);
            if(cnt >= 2)
                sprintf(TEMP,"%d%c",cnt + 1,input[i]);
            else if(cnt == 0) sprintf(TEMP,"%c",input[i]);
            else if(cnt == 1)
            {
                sprintf(TEMP,"%c%c",input[i],input[i]);
            }
           // printf("%s",TEMP);
            strcat(output,TEMP);
            cnt = 0;

        }
    }

	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);
    len = strlen(input);
    encoded_len = strlen(output);
	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
