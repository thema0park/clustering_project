#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;//원문자열의 길이, 부호화된 것의 길이
	scanf("%s", input);//입력값

    int k;
    int i=0;
    int count[MAX_LEN];
    for(k=0;k<MAX_LEN-1;k++){
        if(input[k] == input[k+1]){
            output[i] = input[k];
            count[i] = count[i]+1;
        }
        else{
            i++;
            output[i]= input[k];
        }
    }
   
	////////////////////////////////////////
    
	printf("%s\n", input);//입력값
    for(k=0;k<i;k++){
        printf("%d%c ", count[k], output[k]);
    }
    printf("\n");
	printf("%s\n", output);//아웃풋

//	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
    //압축률
	return 0;
}
