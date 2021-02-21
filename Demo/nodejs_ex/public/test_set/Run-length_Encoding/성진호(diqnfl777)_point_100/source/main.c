#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num,i, encoded_len = 0;

    int repeats=1,sp = 0;

	scanf("%s", input);
    
    for (i=1;i<MAX_LEN;i++){
        if(input[i]=='\0'){
            if(repeats>=10){
                output[sp++]= '0'+(repeats/10);
                output[sp++]= '0'+(repeats%10);
            }
            else if(repeats==2){
                output[sp++]=input[i-1];
            }
            else if(repeats!=1){
                output[sp++]='0'+repeats;
            }   
            output[sp++]=input[i-1];
            output[sp]='\0';
            len = i;
            break;
        } 
        if(!(input[i]>='A'&&input[i]<='Z')){
            printf("Input Error\n");
            return 0;
        }
        if(input[i]==input[i-1]){
            repeats++;
        }
        else{
            if(repeats>=10){
                output[sp++]= '0'+(repeats/10);
                output[sp++]= '0'+(repeats%10);
            }
            else if(repeats==2){
                output[sp++]=input[i-1];
            }
            else if(repeats!=1){
                output[sp++]='0'+repeats;
            }  
            output[sp++]=input[i-1];
            repeats=1;
        }
    }
    encoded_len=sp;
	printf("%s\n", input);
	printf("%s\n", output);
	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
