#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN] = {0};
	char output[MAX_LEN] = {0};
	int len, num, encoded_len = 0;
    int i = 0; // 포문 돌리기
    char compare;
	scanf("%s", input);

	////////////////////////////////////////
    len = strlen(input);
    for(i = 0; i < len; i++) {
        if(input[i] <= 64 || input[i] >= 91) {
            printf("Input Error\n");
            return 0;
        }
    } // 대문자 검사

    printf("%s\n", input);

    compare = input[0];
    num++;
    for(i = 1; i <= len; i++) {
        if(compare == input[i]) {
            num++;
        }
        else if(compare != input[i]) {
            printf("%d%c", num, compare);
            if(num >= 10) encoded_len++;
            compare = input[i];
            num = 1;
            encoded_len += 2;
        }

    }	
    
    
    ////////////////////////////////////////

	printf("\n");

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
