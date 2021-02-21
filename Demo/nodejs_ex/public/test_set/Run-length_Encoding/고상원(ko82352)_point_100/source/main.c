#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN]={0};
	char output[MAX_LEN]={0};
	int len, num=0, encoded_len = 0;
    int i;
    char check=0;
	scanf("%s", input);

	///////////////////////////////////////////////
    len=strlen(input);
    for(i=0;i<len;i++){
        if(input[i]<'A' || input[i]>'Z'){
            printf("Input Error\n");
            return 0;
        }
        if(input[i]==input[i+1])
            num++;
        else{
            num++;
            if(num==1)
            output[encoded_len++]=input[i];
            else if(num==2){
                output[encoded_len++]=input[i];
                output[encoded_len++]=input[i];
            }

            else if(num>=3 && num<10){
                output[encoded_len++]=num+'0';
                output[encoded_len++]=input[i];
            }
            else if(num>=10 && num<100){
                output[encoded_len++]=(num/10)+'0';
                output[encoded_len++]=(num%10)+'0';
                output[encoded_len++]=input[i];
            }
            num=0;
        }
    }



    ///////////////////////////////////////////////
	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
