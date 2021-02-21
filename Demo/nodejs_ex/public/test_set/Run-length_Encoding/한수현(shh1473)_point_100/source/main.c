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

    int q;

    len = strlen(input);

    for (q = 0; q < len; ++q)
    {
        if (input[q] < 'A' || input[q] > 'Z')
        {
            printf("Input Error\n");
            return 0;
        }
    }

    printf("%s\n", input);


	////////////////////////////////////////

    int out_len = 0;
    int index = 0;
    int count = 0;
    char nowC = input[0];

    while (input[index] != '\0')
    {
        nowC = input[index];

        count = 1;

        while(input[index] != '\0')
        {
            if (nowC != input[++index])
            {
                break;
            }

            ++count;
        }

        if (count < 3)
        {
            int i = 0;

            for (i = 0; i < count; ++i)
            {
                printf("%c", input[index - 1 - i]);
            }
        }
        else
        {
            int i = 0;

            printf("%d%c", count, input[index - 1]);
        }

        ++out_len;

        if (count > 9)
        {
            out_len += 2;
        }
        else if (count > 1)
        {
            out_len += 1;
        }
    }

    printf("\n");

    encoded_len = out_len;

	////////////////////////////////////////

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
