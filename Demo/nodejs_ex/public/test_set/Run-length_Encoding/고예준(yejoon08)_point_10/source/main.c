#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len,icount = 0;
    int i=0;
    int j=0;
    int k=0;
    int a=0;
    int count=1;
    int count1=0;

	scanf("%s", input);

    len=strlen(input);
	////////////////////////////////////////
    for(i=0;i<len;i++){
        if(!(input[i]>='A'&&input[i]<='Z')){
            printf("Input Error");
            return 0;
        }
    }

    for(i=0;i<len;i++){
        if(input[i]==input[i+1]){
            count=count+1;
        }
        else{
            if(count==1||count==2){
                output[j]=input[i];
                count=1;
            }
            else{
                icount=count;
                do{
                    count=count/10;
                    a=a+1;
                }while(count!=0);
                count=icount;
                for(k=0;k<a;k++){
                    count=count/10;
                    if(count>=10){
                        count=count/10;
                        continue;
                    }
                    if(count<10){
                        count=count%10;
                        if(count==1){
                        output[j]='1';
                        j=j+1;
                    }
                    else if(count==2){
                        output[j]='2';
                        j=j+1;
                    }
                     else if(count==3){
                        output[j]='3';
                        j=j+1;
                    }
                     else if(count==4){
                        output[j]='4';
                        j=j+1;
                    }
                     else if(count==5){
                        output[j]='5';
                        j=j+1;
                    }
                     else if(count==6){
                        output[j]='6';
                        j=j+1;
                    }
                     else if(count==7){
                        output[j]='7';
                        j=j+1;
                    }
                     else if(count==8){
                        output[j]='8';
                        j=j+1;
                    }
                     else if(count==9){
                        output[j]='9';
                        j=j+1;
                    }
                    else if(count==0){
                        output[j]='0';
                        j=j+1;
                    }
                }
                }     
                }
                output[j]=input[i];
                j=j+1;
                count=1;
             }
        }


    
    encoded_len=strlen(output);



	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
