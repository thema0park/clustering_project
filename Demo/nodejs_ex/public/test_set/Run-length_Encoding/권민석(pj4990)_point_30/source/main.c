#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;

	scanf("%s", input);

	////////////////////////////////////////
    int i,j;
    i=j=0;
    int second='0';
    int flag=1;
    num='1';
    len=strlen(input);
    //error Test
    for (i=0;i<len-1;i++){
        if ('A'<input[i] && input[i]>'Z'){
            printf("Input Error");
            return 0;
        }
    }

    //
    for (i=0;i<len-1;i++){
       if(input[i]!=input[i+1]){
           if (num >= '2' && num <= '9') {

               output[j]=num;
               j++;
               output[j]=input[i];
               j++;
               num='1';
           }
           else if (num > '9'){

               while(flag){
               second++;
               num=num-10;
                    if (num>='0' && num<='9'){
                    flag=0;}
               }
               output[j]=second;
               j++;
               output[j]=num;
               j++;
               output[j]=input[i];
               j++;                
           }
           else{
               output[j]=input[i];
                j++;
           }
       }
       else {
           num++;

       }
    }
        if (input[len-1]==input[len-2]){
             if (num >= '2' && num <= '9') {
                output[j]=num;
                j++;
                output[j]=input[len-1];
                j++;
             }
             else if (num > '9'){

               while(flag){
               second++;
               num=num-10;
                    if (num>='0' && num<='9'){
                    flag=0;}
               }
               output[j]=second;
               j++;
               output[j]=num;
               j++;
               output[j]=input[i];
               j++;                
           }
        }
        else {

            output[j]=input[len-1];
            j++;
        }
       output[j]=NULL;
       encoded_len=strlen(output);
	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
