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
    int count=1;
    int i;
    int outi=0;
    printf("%s\n", input);
    for(i=0;i<strlen(input);i++)
    {
        if(input[i]<'A'&&input[i]>'Z')
        {
            printf("Input Error\n");
            return 0;
        }
    }
    for(i=0;i<strlen(input);i++)
    {
        // if(i==strlen(input)-1)
        // {
        //     outi++;
        //     if(count==1)
        //     {
        //         break;
        //     }
        //     if(count!=1)
        //     {
        //         printf("%d",count);
        //     }
        //     while(1)
        //     {
        //         if(count==1)
        //         {
        //             break;
        //         }
        //         if(count<10)
        //         {
        //             if(count!=0)
        //             {
        //                 outi++;
        //             }
        //             break;
        //         }
        //         count/=10;
        //         outi++;
        //     }
        //     printf("%c",input[i]);
        //     printf("1\n");
        //     break;
        // }
        if(input[i]!=input[i+1])
        {
            outi++;
            if(count!=1)
            {
                printf("%d",count);
            }
            if(count%10==0)
            {
                outi++;
            }
            while(1)
            {
                if(count==1)
                {
                    break;
                }
                if(count<10)
                {
                    if(count!=0)
                    {
                        outi++;
                    }
                    break;
                }
                count/=10;
                outi++;
            }
            printf("%c",input[i]);
            count=1;
        }
        else
        {
            count++;
        }
    }
    printf("\n");
    len=strlen(input);
    encoded_len=outi;



	////////////////////////////////////////


	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
