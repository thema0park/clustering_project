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

    len = strlen(input);

    int i;
    char last = input[0];
    int length = 1;
    for (i = 1; i <= len; i++) {
        if (last < 'A' || 'Z' < last) {
            printf("Input Error\n");
            return 0;
        }

        if (input[i] == last) {
            length++;
        } else {
            if (length > 2) {
                int digits[51];
                int digit = 0;
                while (length > 0) {
                    digits[digit++] = length % 10;
                    length /= 10;
                }
                while (digit--) {
                    output[encoded_len++] = digits[digit] + '0';
                }

                output[encoded_len++] = last;
            } else {
                while (length--) output[encoded_len++] = last;
            }

            last = input[i];
            length = 1;
        }
    }
    output[encoded_len] = 0;

	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
