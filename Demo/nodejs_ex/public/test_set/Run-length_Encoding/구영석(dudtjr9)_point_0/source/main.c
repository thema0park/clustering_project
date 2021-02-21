#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    int i,j , count=0, flag=1;

	scanf("%s", input);

	////////////////////////////////////////
    len = strlen(input);
    for(i=0;i<len;i++){
        for(j=1;j<len;j++){
            if(input[i]==input[j]) {
                count++;
            }
            else break;
        }
        if(count>1){
            count +=1;
            if(count<=9){
                output[i]='0'+count;
                output[i+1]=input[i];
            }
            else if(count>9){
                output[i]= (count/10) + '0';
                output[i+1]= (count%10) +'0';
                output[i+2]=input[i];
            }
        }
        else if(count==1) {
            output[i]=input[i];
            output[i+1]=input[i];
        }
        else if(count==0){
            output[i]=input[i];
        }
        i=count+1;
        j=count+2;
    }
    encoded_len = strlen(output);




	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}