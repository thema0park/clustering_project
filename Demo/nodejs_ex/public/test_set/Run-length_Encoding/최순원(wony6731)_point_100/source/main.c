#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LEN 51

// A = 65
// Z = 90
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
    char tmp;
    char num[3];
	int len, encoded_len, flag, index = 0;
    int k;

    num[0] = '0';
    num[1] = '0';
    num[2] = NULL;

	scanf("%s", input);

    len = strlen(input);
	////////////////////////////////////////
    // 알파벳 대문자 이외의 문자가 입력된 경우 오류 처리
    for(k = 0; k < len; k++)
    {
        tmp = input[k];
        if((int)tmp < 65 || (int)tmp > 90)
        {
            printf("Input Error\n");
            return 0;
        }
    }

    // Run-length Encoding
    for(k = 0; k < len; k++)
    {
        if(input[k+1] == NULL)
        {
            if(flag == 1)
            {
                if(num[0] == '0' && num[1] == '0')
                {
                    output[index] = input[k];
                    index++;
                }
                else if(num[0] == '1' && num[1] == '0')
                {
                    output[index] = input[k];
                    output[index + 1] = input[k];
                    index = index + 2;
                }
                else
                {
                    if(num[0] == '9')
                    {
                        num[1]++;
                        num[0] = '0';
                    }
                    else
                        num[0]++;

                    if(num[1] == '0')
                    {
                        output[index] = num[0];
                        output[index + 1] = input[k];
                        index = index + 2;
                    }
                    else
                    {
                        output[index] = num[1];
                        output[index + 1] = num[0];
                        output[index + 2] = input[k];
                        index = index + 3;
                    }
                }
            }
            else
            {
                output[index] = input[k];
                index++;
            }
            break;
        }

        // start
        if(input[k] == input[k+1])
        {
            if(num[0] == '9')
            {
                num[1]++;
                num[0] = '0';
            }
            else
                num[0]++;

            flag = 1;
        }
        else
        {
            if(num[0] == '0' && num[1] == '0')
            {
                output[index] = input[k];
                index++;
            }
            else if(num[0] == '1' && num[1] == '0')
            {
                output[index] = input[k];
                output[index + 1] = input[k];
                index = index + 2;
            }
            else
            {
                if(num[0] == '9')
                    {
                        num[1]++;
                        num[0] = '0';
                    }
                else
                    num[0]++;
                    
                if(num[1] == '0')
                {
                    output[index] = num[0];
                    output[index + 1] = input[k];
                    index = index + 2;
                }
                else
                {
                    output[index] = num[1];
                    output[index + 1] = num[0];
                    output[index + 2] = input[k];
                    index = index + 3;
                }
            }
            num[0] = '0';
            num[1] = '0';
            flag = 0;
        }
    }
    output[index] = NULL;
    encoded_len = strlen(output);
	////////////////////////////////////////

	printf("%s\n", input);                                                            // 입력된 문자열
	printf("%s\n", output);                                                           // 인코딩 결과 문자열

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);            // 압축률
	return 0;
}
