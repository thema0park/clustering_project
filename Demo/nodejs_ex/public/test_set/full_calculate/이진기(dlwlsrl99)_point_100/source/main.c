#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int check=0;
    int jud=0;
    int b=0;
	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    
    //오류검사부분
    for(check;check<BYTE_SIZE;check++)
    {
        if(byte[0][check]=='0' || byte[0][check] =='1')
        {
            if(byte[1][check]=='0' || byte[1][check] =='1')
            {
                
            }
           else
                {
                    printf("Input Error\n");
                    return 0;
                }
        }
        else
                {
                    printf("Input Error\n");
                    return 0;
                }
        
    }

    int a=BYTE_SIZE-1; //오류나면 int 위로 올려보기.
   for(a;a>=0;a--)
    {
        out[a]=byte[0][a]+byte[1][a]-'0';
        out[a]=jud+out[a];
        jud=0;
        if(out[a]>='2')
        {
            out[a]=out[a]-2;
            jud=1;
        }
    }
    

	////////////////////////////////////////
    for(b;b<8;b++)
    {
	 printf("%c", out[b]);
    }
    printf("\n");
	return 0;
}
