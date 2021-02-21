#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define MAX_LEN 51

int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN] = "10A";
	int len, num, encoded_len = 0;
    int i, j;
    int tmp = 0;

	scanf("%s", input);
    for(i = 0; i < strlen(input); i++){
        if(input[i]<'A'||input[i]>'Z'){
            printf("Input Error\n");
            break;
        }
    }

        
    len = strlen(input);
    encoded_len = strlen(output);

    printf("%s\n", input);
    printf("%s\n", output);

    printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);

        
    
	return 0;
}
