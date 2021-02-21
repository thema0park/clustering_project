#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#define MAX_LEN 51

int main()
{
	char input[MAX_LEN];

	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    int i = 0, s = 0;
    char count1 = '1';
    int count2 = 0;
	scanf("%s", input);

	////////////////////////////////////////
    for (i = 0; i < strlen(input); i++) {
        if(input[i]<'A' || input[i]>'Z') {
            printf("Input Error");
            return 0;
        }
    }
    for (i = 0; i < strlen(input); i++) {
        if (input[i] == input [i+1]) {
            if(count1 = '9') {
                count1 = '0';
                output[s] = '1';
                s++;
            }
            
        }
        else if (input[i] != input[i+1]) {
            output[s] = count1;
            output[s+1] = input[i];
            s++;
        }
    }
	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);
    len = strlen(input);
    encoded_len = strlen(output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
