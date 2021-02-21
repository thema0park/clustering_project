#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
    char curChar, preChar;
	int i, len, num, encoded_len = 0;

	scanf("%s", input);

	////////////////////////////////////////
    len = 0;
    curChar = input[0];
    preChar = input[0];
    num = 0;

    i = 0;
    while(input[i]) {
        if(input[i] < 'A' || input[i] > 'Z') {
            printf("Input Error\n");
            return 0;
        }
        i++;
    }

    printf("%s\n", input);

    while (input[len]) {
        preChar = curChar;
        curChar = input[len];
        if (curChar == preChar) num++;
        else {
            if(num == 1) {
                printf("%c", preChar);
                encoded_len += 1;
            } else if (num == 2) {
                printf("%c%c", preChar, preChar);
                encoded_len += 2;
            }
            else {
                printf("%d%c", num, preChar);
                if(num > 9) encoded_len += 3;
                else encoded_len += 2;
            }
            num = 1;
        }
        len++;
    }
    if(num == 1) {
        printf("%c\n", curChar);
        encoded_len += 1;
    } else if (num == 2) {
        printf("%c%c\n", curChar, curChar);
        encoded_len += 2;
    }
    else {
        printf("%d%c\n", num, curChar);
        if(num > 9) encoded_len += 3;
        else encoded_len += 2;
    }

	////////////////////////////////////////


	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
