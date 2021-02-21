#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0,i,ans;

	scanf("%s", input);
    for(i=0;i<51;i++)
    {
        if(('A'>input[i])&&(input[i]>'Z'))
        {
            ans=0;
        }
    }
    if(ans==0)
    {
        printf("Input Error\n");
    }
	////////////////////////////////////////
	////////////////////////////////////////
    if(('A'<=input[i])&&(input[i]<='Z'))
    {
        printf("%s\n", input);
        printf("%s\n", output);

        printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
    }
	return 0;
}
