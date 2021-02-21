#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    int re[128]={};
    int temp = 0;
    char ten, one;

    
    int i,j=0;;

	scanf("%s", input);

	////////////////////////////////////////

    

    for (i=0;input[i]!='\0';i++)
    {
        if (input[i]>='A'&&input[i]<='Z')
        {
            continue;
        }
        else
        {
            printf("Input Error\n");
            return 0;
        }
    }
   
    for (i=0;input[i]!='\0';i++)
    {
        re[input[i]]++;
    }

    for (i=0;input[i]!='\0';i++)
    {
        if (temp == input[i]) continue;
        
        temp = input[i];
        num = re[input[i]];
        
        ten = num/10+'0';
        one = num%10+'0';

        if (ten == '0')
        {
            if (one=='1')
            {
                output[j++] = input[i];
            }
            else if (one=='2')
            {
                output[j++] = input[i];
                output[j++] = input[i];
            }
            else
            {
                output[j++] = one;
                output[j++] = input[i];
            }
        }
        else 
        {
            output[j++] = ten;
            output[j++] = one;
            output[j++] = input[i];
        }
    }

    output[j]='\0';

    len = strlen(input);
    encoded_len = strlen(output);


	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
