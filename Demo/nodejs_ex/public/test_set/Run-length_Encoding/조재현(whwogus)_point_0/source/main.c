#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0; // 
    int i;
    int count = 1;
	scanf("%s", input);

	////////////////////////////////////////

    for (i=0;i<MAX_LEN;i++)
    {
        if (input[i] == input[i+1])
        { 
            count +=1; 
            if (input[i+1] == input[i+2]){
                count +=1;
                if (input[i+1] == input[i+2]){
                count +=1;
                if (input[i+1] == input[i+2]){
                count +=1;
                if (input[i+1] == input[i+2]){
                count +=1;
                if (input[i+1] == input[i+2]){
                count +=1;
            }
            }
            }
                }
            }
        }
        

    }



	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len); // 압축률, 원래길이, 압축길이

	return 0;
}
