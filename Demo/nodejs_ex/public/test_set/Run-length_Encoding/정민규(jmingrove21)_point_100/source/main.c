#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;

	scanf("%s", input);

	////////////////////////////////////////
    int i,j=0;
    
    for(i=0;i<MAX_LEN;i++){
        if(input[i]=='\0'){
            len=i;
            break;
        }
    }
    for(i=0;i<len;i++){
        if(input[i]<65||input[i]>90)
        {
            printf("Input Error\n");
            return 0;
        }
    }
    int count=1;
    int point=0;
    for(i=0;i<len;i++){
        if(input[i+1]!='\0'){
            if(input[i]==input[i+1]){
                count++;
            }
            else{
                if(count==1){
                    output[point++]=input[i];
                    count=1;

                }else if(count==2){
                    output[point++]=input[i];
                    output[point++]=input[i];
                    count=1;

                }else{
                  if(count>=10){
                    output[point++]=count/10+48;
                    output[point++]=count%10+48;
                    output[point++]=input[i];
                    count=1;
                  }else{
                    output[point++]=count+48;
                    output[point++]=input[i];
                    count=1;
                  }
                }
                
            }
        }else{
            if(count==1){
                output[point++]=input[i];

            }else if(count==2){
                output[point++]=input[i];
                output[point++]=input[i];
            }else{
                if(count>=10){
                    output[point++]=count/10+48;
                    output[point++]=count%10+48;
                    output[point++]=input[i];
                }else{
                    output[point++]=count+48;
                    output[point++]=input[i];
                  }
            }
            output[point]='\0';

        }

    }



    for(i=0;i<MAX_LEN;i++){
        if(output[i]=='\0'){
            encoded_len=i;
            break;
        }
    }
    
	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
