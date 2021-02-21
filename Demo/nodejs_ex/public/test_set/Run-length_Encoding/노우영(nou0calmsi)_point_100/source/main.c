#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, i, num, e_num=0, error;
    double e;
	scanf("%s", input);
    len=strlen(input);
    for(i=0;i<len;i++){
        error = input[i]-'A';
        if(error<0 || error>25){
            printf("Input Error\n");
            return 0;
        }
    }
    printf("%s\n", input);
    num=0;
    for(i=0;i<len;i++){
        if(input[i]==input[i+1]){
            num++;
        }
        else if(num==0&&input[i]!=input[i+1]){
            printf("%c", input[i]);
            e_num++;
        }
        else if(num>0&&input[i]!=input[i+1]){
            num++;
            if(num==2){
                printf("%c%c", input[i]);
            }
            else printf("%d%c", num, input[i]);
            if(num>=10) e_num += 3;
            else e_num += 2;
            num=0;
        }
    }
    printf("\n");
    e=(len+0.0)/(e_num+0.0);
    printf("%.6lf(%d/%d)\n", e, len, e_num);
	return 0;
}
