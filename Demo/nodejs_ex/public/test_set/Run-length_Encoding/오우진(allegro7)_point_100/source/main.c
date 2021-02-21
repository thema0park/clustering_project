#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define MAX_LEN 51
int rep_edge(char * cur){
    int i =0 ;
    while(cur[i] == cur[i+1]){
        i++;
    }
    //printf("%d\n",i);
    return i;
}
int isAlpha(char *str){
    int c= 0, len = strlen(str);
    for(;c<len;c++){
        if(str[c] < 'A' || str[c] > 'Z')
            return 0;
    }
    return 1;
}
int main()
{
	char input[MAX_LEN] ={0,};
	char output[MAX_LEN] = {0,};
	int len, num, encoded_len = 0;
    int count = 0;
    int i,offset;
	scanf("%50s", input);
    len = strlen(input);
    if(!isAlpha(input)){
        return printf("Input Error\n");
    }
	////////////////////////////////////////
    for(i = 0; i < len; ){
        offset = rep_edge(&input[i]);
        if(offset == 0){
            
            output[count++] = input[i];
            i++;
            continue;
        }
        else if(offset == 1){
            
            output[count] = input[i];
            output[count+1] = input[i];
            i = i + 2;
            count += 2;
            continue;
        }
        else{
            sprintf(&output[count],"%d", offset+1);
            num = strlen(&output[count]);
            output[count+num] = input[i];
            count += num+1;
            i += offset+1;
            continue;
        }
    }

    encoded_len = strlen(output);
	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
