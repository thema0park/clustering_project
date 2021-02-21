#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, encoded_len = 0;
    int num = 1;
    int i, j = 0;

	scanf("%s", input);

	////////////////////////////////////////
    
        for(i = 0; i < MAX_LEN; i++) {
            if(input[i] == input[i + 1]) {
                num += 1;
            }
            printf("%d", num);

        
        }

    


	////////////////////////////////////////
	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
