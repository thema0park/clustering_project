#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	int len, num, encoded_len = 0;
    int i, j;
    int count[51] = {0};
    int count_a=1 ,count_s=1;
    int z=0;

	scanf("%s", input);

    len = strlen(input);

    for (i=0 ; i<len ; i++)
    {
        if (input[i]<'A' || input[i]>'Z')
        {
            printf("Input Error\n");
            return 0;
        }
    }

    for (i=0 ; i<len ; i++)
    {
        for (j=i+1 ; j<len ; j++)
        {
            if (input[i] == input[j]) 
            {
                count_s++;
            }
        }
        count_a++;
        if (count_s >= 10) count_a++;
        break;
    }
    printf("%d%c\n", count_s, input[0]);


	printf("%.6lf(%d/%d)\n", (double)len / count_a, len, count_a);
	return 0;
}
