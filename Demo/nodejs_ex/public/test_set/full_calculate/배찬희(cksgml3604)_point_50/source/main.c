#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i;

	scanf("%s %s", byte[0], byte[1]);

	//지정된 입력 외의 문자가 입력되면 "Input Error"를 출력한다.
    for (i=0;i<8;i++){
        
        if (byte[0][i] > '1') {
            printf("Input Error\n", i);
            return 0;
        }
        if (byte[1][i] > '1') {
            printf("Input Error\n", i);
            return 0;
        }

    }

    // 더하기
    for (i=7;i>=0;i--){
        
        //out[i] = byte[0][i] + byte[1][i];
        if (byte[0][i] < '1'){
            if ( byte[1][i] < '1'){
                out[i] = byte[0][i]; //00
                //printf ("a");
            }
            else {
                out[i] = byte[1][i]; //01
                //printf ("b");
            }
        }
        else{
            if ( byte[1][i] < '1') {
                out[i] = byte[0][i]; //10
                //printf ("c");
            }
            else{
                out[i] = (byte[0][i] + 1); //11//21
                //printf ("d");
            }
        }
        
        if (out[i] > '1'){//0,1이 아닐때
            //printf ("x");
            if (out[i] >'2') {
                //printf ("y");
                out[i] = '1';
                byte[0][i-1] += 1;
            }
            else{
                out[i] = '0';
                //printf ("z");
                byte[0][i+1] += 1;
            }
        
        }
    }
    //왼쪽 첫 번째 비트에서 발생되는 자리 올림은 무시한다.
    if (out[0]>'0'){
        out[i] = '0';
    }
	printf("%s\n", out);

	return 0;
}
