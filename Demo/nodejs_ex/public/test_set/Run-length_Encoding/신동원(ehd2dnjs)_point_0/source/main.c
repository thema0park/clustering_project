#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN]={0,};
	char output[MAX_LEN]={0,};
    int i=0,j=0,k=0;
    int a=0, b=0, c=0;
	int len, num, encoded_len = 0;

	scanf("%s", input);

	////////////////////////////////////////
    
    len=strlen(input);
    encoded_len=strlen(output);

    

    for(i;i<len;i++){
    if(input[a]==input[a+1]){
        ++b;
        ++a;
    }
    else{
        if(b==1){
            output[c]=input[a];
            output[c+1]=input[a];
            c+=2;
            b=0;
        }
        else if(b==0){
            output[c]=input[a];
            c+=1;
            ++a;
        }
        else{
        output[c]=b+1;
        output[c+1]=input[a];
        c+=2;
        b=0;
        ++a;}
    }}

    printf("%d\n",output[0]);
    
    printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	
	return 0;
}
