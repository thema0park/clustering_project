#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX_LEN 51
int main()
{
	char input[MAX_LEN] = {0};
	char output[MAX_LEN] = {0};
	int len, num, encoded_len = 0;
    int count=0,cnt =1;
    int i,j,k;
	scanf("%s", input);
  
    
    for(i=0; i<MAX_LEN;i++){
        if(input[i] == '\0') break;
        else len ++;
        
        if(input[i] == input[i+1]){
            cnt ++;
        }
        else{
            cnt++;
            if(cnt>=10){
                output[count] = cnt/10;
                 cnt = cnt % 10;
                 count++;
                 encoded_len ++;
            }
            output[count] = cnt;
            encoded_len ++;
            ++count;
            output[count] = input[i];
            count++;
            encoded_len ++;
            cnt = 1;
        }
    }
    printf("%s\n",input);
    printf("%s\n",output);
    printf("%lf(%d/%d)\n",len/encoded_len,len,encoded_len);
    return 0;
}
