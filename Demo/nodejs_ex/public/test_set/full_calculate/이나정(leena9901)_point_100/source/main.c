#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    
	scanf("%s %s", byte[0], byte[1]);
    
	////////////////////////////////////////
    
    char temp[BYTE_SIZE+1]={'0','0','0','0','0','0','0','0'};
    
    int k=0;
    int u=0;
    for (;u<8;u++){
        if (byte[0][u]<'0')
            k++;
        if (byte[1][u]<'0')
            k++;
        if (byte[0][u]>'1')
            k++;
        if (byte[1][u]>'1')
            k++;
    }

    if(k>=1)
        printf("Input Error\n");
    
    else{
        int i=7;
        for (;i>0;i--){
            int num=byte[0][i]-'0'+ byte[1][i]-'0'+ temp[i]-'0';
            if (num == 0)
                out[i]='0';
            else if (num==1)
                out[i]='1';
            else if(num==2){
                out[i]='0';
                temp[i-1]='1';
            }
            else if(num==3){
                out[i]='1';
                temp[i-1]='1';
            }
        }

        int num2=byte[0][0]-'0'+byte[1][0]-'0'+ temp[0]-'0';
        
        if(num2==0)
            out[0]='0';
        else if(num2==1)
            out[0]='1';
        else if(num2==2)
            out[0]='0';
        else if(num2==3)
            out[0]='1';
        int p=0;
        for(;p<8;p++)
            printf("%c", out[p]);
        printf("\n");
    }

	////////////////////////////////////////

	return 0;
}
