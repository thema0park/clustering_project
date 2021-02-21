#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    int count=1;
    int k=0;
    int i=0;
    int j=0;

	scanf("%s", input);
    
    for(j=0;j<51;j++)
    {
        if((input[j] >='A' || input[j] <='Z'))
        {
        printf("Input Error\n");
         return 0;
        }
    }

	////////////////////////////////////////
    for(i=0;i<51;i++) // 길이만큼실행
    {
        if(input[i]== input[i+1])
        {
            count=count+1;
        }
        else
        {
            output[k]=count; //숫자대입
            output[k+1]=input[i]; //문자대입
            k=k+2;
            count = 1; //카운팅 초기화.
        }

    }

	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
