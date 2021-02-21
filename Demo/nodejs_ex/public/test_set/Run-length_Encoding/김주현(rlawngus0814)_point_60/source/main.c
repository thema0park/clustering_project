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
    len=strlen(input);
    int i=0;
    //대문자 알파벳이 아니면 거른다!!!
    for(i=0;i<len;i++)
    {
        if(('A'>input[i])||(input[i]>'Z'))
        {
            printf("Input Error\n");
            return 0;
        }
    }

    i=0;

    int count[MAX_LEN]={1};
    int j=0;
    for(i=0;i<len;)
    {
        output[j]=input[i];
        while(1)
        {
             if(output[j]==input[i+1])
            {
                count[j]++;
                i++;
            }
            else
            {
                j++;
                i++;
                break;
            }
        }
    }
    output[j]=NULL;
    int sum=j;
    printf("%s\n", input);
    i=0;
    int cnt=0;
    while(j--)
    {
        if(count[i]>2)
        {
            if(count[i]>9)
            {
                printf("%d",count[i]);
                cnt=cnt+2;
            }
            else
            {
                printf("%d",count[i]);
                cnt++;
            }
        }
        printf("%c",output[i]);
        i++;
    }
    printf("\n");
    encoded_len=sum+cnt;

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
