#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    int i;
    int count =0;
	scanf("%s", input);
        len = strlen(input);

 for(i=0; i<len; i++){
        if(input[i]==input[i+1]){
        count +=1;
    
        }

    }
    num = &input[0];
   
    output[count] = count,num ;
      
    
 
         encoded_len = strlen(output);   



	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
