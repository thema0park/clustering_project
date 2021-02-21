#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN]={};
	char output[MAX_LEN]={};
	int len, num, encoded_len = 0;

	scanf("%s", input);
    len = strlen(input);
    char tmp = '0';
	////////////////////////////////////////
    int count = 1;
    int i=0,j=0;
    for(i=0; i<len; i++){
        if(input[i] > 'Z' || input[i] < 'A'){
            printf("Input Error\n");
            return 0;
        }
        tmp = input[i];
        
        if(input[i] == input[i+1]){
            tmp = input[i];
            count++;
        }
        else if(input[i] != input[i+1]){
            if(count >= 10){
                output[j] = count/10 + '0';
                j++;
                output[j] = count % 10 + '0';
                j++;
                output[j] = tmp;
                j++;
            }
            else if(count == 1){
                output[j] = tmp;
                j++;
            }
            else if(count == 2){
                output[j] = tmp;
                j++;
                output[j] = tmp;
                j++;
            }
            else {
                output[j] = count + '0';
                j++;
                output[j] = tmp;
                j++;
            }
            count = 1;
        }
        output[j] = '\0';
    }


	////////////////////////////////////////
    encoded_len = strlen(output);
	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / (double)encoded_len, len, encoded_len);
	return 0;
}
