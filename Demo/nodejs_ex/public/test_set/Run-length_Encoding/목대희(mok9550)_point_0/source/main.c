#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num = 0, encoded_len, count=1, i, j;
    char a;

	scanf("%s", input);

	////////////////////////////////////////
    len = strlen(input);
    
    for(i = 0; i < len; i++) {
        if(input[i] == input[i+1]) {
            count += 1;
            if(i == len - 1) {
                if(count == 1) {
                output[num] = input[i];
                num++;
            }
            else if(count == 2) {
                output[num] = input[i];
                output[num + 1] = input[i];
                num++;
                num++;
            }
            else if(count < 10) {
                output[num] = (char)count;
                output[num + 1] = input[i];
                num++;
                num++;
            }
            else {
                output[num] = (char)(count/10);
                output[num + 1] = (char)(count%10);
                output[num + 2] = input[i];
                num++;
                num++;
                num++;
            }
            }
        }
        else {
            if(count == 1) {
                output[num] = input[i];
                num++;
            }
            else if(count == 2) {
                output[num] = input[i];
                output[num + 1] = input[i];
                num++;
                num++;
            }
            else if(count < 10) {
                output[num] = (char)count;
                output[num + 1] = input[i];
                num++;
                num++;
            }
            else {
                output[num] = (char)(count/10);
                output[num + 1] = (char)(count%10);
                output[num + 2] = input[i];
                num++;
                num++;
                num++;
            }
        }
    }
    encoded_len = strlen(output);

	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
