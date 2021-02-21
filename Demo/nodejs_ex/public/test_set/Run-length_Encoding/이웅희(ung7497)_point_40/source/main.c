#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_LEN 51
int main()
{   
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len = 0, num = 0, encoded_len = 0;
    int n = 0, i, x, y, k, g = 0;
	scanf("%s", input);
    
	////////////////////////////////////////
    while(input[n] != '\0'){            // input 길이 구하기
        n++;
        len++;
    }
    for(i = 0; i < len; i++){                   // 대문자 아닌 문자 거르기
        if(!(input[i] <= 'Z' && input[i] >= 'A')){
            printf("Input Error\n");
            return 0;
        }
    }
    k = 0;
    for(x = k; x < len; x++){               // 부호화
        num = 0;
        for(y = x; y < len; y++){
            if(input[x] == input [y]){
                num++;
            }
            else{
                break;
            }
        }
        k = y - 1;
        if(num < 10 && num>2){
            output[g] = num;
            output[g+1] = input[x];
            g +=2;
        }
        if(num>=10){
            output[g] = (char)1;
            output[g+1] = (char)(num - 10); 
            output[g+2] = input[x];
            g +=3;
        }
        if (num ==2 ){
            output[g] = input[y];
            output[g+1] = input[x];
            g+=2;
        }
        if (num == 1){
            output[g] = input[x];
            g +=1;
        }

    }
    n = 0;
     while(output[n] != '\0'){            // output길이 구하기
        n++;
        encoded_len++;
    }
    

	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);

	return 0;
}
