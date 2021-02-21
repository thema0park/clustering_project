#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;

	scanf("%s", input);

	////////////////////////////////////////

    int i;
    for(i = 0; i < MAX_LEN; i++){
        output[i] = 0;
    }

    int same_n = 1;
    int out_idx = 0;
    int end = strlen(input);

    for(i = 0; i < end; i++){
        if(input[i] > 'Z' || input[i] < 'A'){
            printf("Input Error\n");
            return 0;
        }

        // 마지막 원소거나, 같지 않은 경우
        if(i + 1 == end || input[i] != input[i + 1]){
            // 한번도 같은 적이 없는 경우
            if(same_n == 1){
                output[out_idx] = input[i];
                out_idx++;
            }
            // 같았던 적이 있는 경우
            else{
               
              output[out_idx + 1] = input[i];
              out_idx += 2;
                
            }
            same_n = 1;
        }
        // 같은 경우
        else if (input[i] == input[i + 1]){
            same_n++;
            // 처음 같은 경우
            if(same_n == 2){
                output[out_idx] = '2';
            }
            // 같았던 적이 있는 경우
            else if (same_n > 2){
                // 올림을 해야하는 경우
                if(same_n % 10 == 0){
                    // 첫 올림인 경우
                    if(same_n / 10 < 2){
                        output[out_idx++] = '1';
                        output[out_idx] = '0';
                    }
                    // 10의 자리 이상인 경우
                    else if (same_n / 10 >= 2){
                        output[out_idx - 1] += 1;
                        output[out_idx] = '0';
                    }
                }
                // 올림이 필요 없는 경우
                else{
                    output[out_idx] += 1;
                }
            }
        }
    }
    len = strlen(input);
    encoded_len = strlen(output);

	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
