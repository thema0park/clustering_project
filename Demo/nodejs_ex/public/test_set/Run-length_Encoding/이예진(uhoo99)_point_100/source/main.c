#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
    char check=0,num[MAX_LEN];
	char output[MAX_LEN];
	int len, encoded_len = 0;
    int i,j,ch=0;
    int count=0,num_cnt=0;

	scanf("%s", input);

    len=strlen(input);
    for(i=0;i<len;i++)
    {
        if('A'<=input[i] && input[i]<='Z')
        {
            if(i==0)
            {
                check=input[i];
                count++;
            }
            else if(check!=input[i])
            {
                if(count>2)
                {
                    num_cnt=0;
                    while(count)
                    {
                        num[num_cnt++]=(char)(count%10+'0');
                        
                        count=count/10;
                    }
                    for(j=num_cnt-1;j>=0;j--)
                    {
                        
                        output[encoded_len++]=num[j];
                    }
                    output[encoded_len++]=check;
                }
                else
                {
                    for(j=0;j<count;j++)
                    {
                        output[encoded_len++]=check;
                    }
                }
                
                check=input[i];
                count=1;
            }
            else
            {
                count++;
            }
        }
        else
        {
            ch=-1;
            printf("Input Error\n");
            break;
        }
    }
    
    if(ch!=-1)
    {
        if(count!=0)
        {
            if(count>2)
            {
                num_cnt=0;
                while(count)
                {
                    num[num_cnt++]=(char)(count%10+'0');
                    count=count/10;
                }
                for(j=num_cnt-1;j>=0;j--)
                {
                    output[encoded_len++]=num[j];
                }
                output[encoded_len++]=check;
            }
            else
            {
                for(j=0;j<count;j++)
                {
                    output[encoded_len++]=check;
                }
            }
                
        }
        encoded_len=strlen(output);
        printf("%s\n", input);
        printf("%s\n", output);
        printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
    }
	return 0;
}
