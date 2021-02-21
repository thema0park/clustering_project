#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    int i=0,j=0;
    int count=0;
    int t=0;

	scanf("%s", input);

	////////////////////////////////////////
    while(1)
    {
        if(input[i]=='\0')
        {
            len=i;
            encoded_len=j;
            output[j]='\0';
            break;
        }
        if(input[i]>=65 && input[i]<=90)
        {
            if(input[i]==input[i+1])
            {
                count++;
            }
            else if((input[i]!=input[i+1])||input[i+1]=='\0')
            {
                ++count;
                if(count==1)
                {
                    output[j]=input[i];
                    j+=1;
                    count=0;
                }
                else if(count==2)
                {
                    output[j]=input[i];
                    output[j+1]=input[i];
                    j+=2;
                    count=0;
                }
                else if(count<10 && count!=1)
                {
                    output[j]=48+count;
                    output[j+1]=input[i];
                    j+=2;
                    count=0;
                }
                else if(count>=10)
                {
                    output[j]=48+(count/10); //십의자리수 입력
                    output[j+1]=48+(count%10); //일의자리수 입력
                    output[j+2]=input[i];//문자입력
                    j+=3;
                    count=0;
                }      
            }
            i++;
        }
        else
        {
          printf("Input Error\n");
            t=1;
            break;
        }
    }

	////////////////////////////////////////
    if(t==0)
    {
	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
    }
	return 0;
}
