#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
    char a,b;
	int len1,len2, num=0;
    int i,j=0;

	scanf("%s", input);

    len1=strlen(input);
    for(i=0;i<len1-1;i++)
    {
        if(input[i]==input[i+1])
            num++;
        else
        {
            if(num==0)
            {
                output[j]=input[i];
                j++;
                num=0;
                
            }
            else if(num==1)
            {
                output[j]=input[i];
                j++;
                output[j]=input[i];
                j++;
                num=0;
            }
            else if(num<9)
            {
                a=(num+1)+48;
                output[j]=a;
                j++;
                output[j]=input[i];
                j++;
                num=0;
            }
            else
            {
                a=((num+1)/10)+48;
                b=((num+1)%10)+48;
                output[j]=a;
                j++;
                output[j]=b;
                j++;
                output[j]=input[i];
                j++;
                num=0;
            }

    
        }
    }
    len2=strlen(output);
	////////////////////////////////////////



	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len1 / len2, len1, len2);
	return 0;
}
