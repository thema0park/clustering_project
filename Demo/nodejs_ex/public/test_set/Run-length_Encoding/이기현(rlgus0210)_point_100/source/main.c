#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];//입력
	char output[MAX_LEN];//출력
	int len, num=0, encoded_len=0,count= 0;
    char tok;
    int k;
	scanf("%s", input);

	////////////////////////////////////////
    len = strlen(input);

    tok = input[0];
    
    for(k=0; k<len; k++){
        if(input[k]>'Z'||input[k]<'A'){
            printf("Input Error\n");
            return 0;
        }
    }

	////////////////////////////////////////

	printf("%s\n", input);
	//printf("%s\n", output);
    while(1){
            num++;
            count++;
            if(input[num] != tok){
                
                if((count)>=3){
                    printf("%d",count);
                    printf("%c",tok);
                    if(count>=10)
                        encoded_len = encoded_len + 3;
                    else
                        encoded_len = encoded_len + 2;
                }
                else if(count == 2){
                    printf("%c",tok);
                    printf("%c",tok);
                    encoded_len = encoded_len +2;
                }
                else{
                    printf("%c",tok);
                    encoded_len++;
                }
                tok = input[num];
                
                count = 0;
                if(input[num]==NULL){
                    printf("\n");
                    break;
                }
                
            }
        }
    
	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);// 압축률 , 원래길이, 압축되고나서 길이
	return 0;
}
