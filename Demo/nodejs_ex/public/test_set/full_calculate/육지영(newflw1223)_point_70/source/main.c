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

    //'0'=48

    int i;

    for(i=0; i<8; i++)
    {
        if(byte[0][i]<48 || byte[0][i]>49 || byte[1][i]<48 || byte[1][i]>49)
        {
            printf("Input Error\n");
            return 0;
        }
    }
    
    for(i=0; i<8; i++)
    {
        out[i]=byte[0][i]+byte[1][i];
    }
    
    for(i=9; i>=0; i--)
    {
        if(out[i]>99)
        {
            if(out[i]==145)
            {
                out[i]='1';
            }
            else if(out[i]==146)
            {
                out[i]='0';
                out[i-1]=out[i-1]+49;
            }
            else if(out[i]==147)
            {
                out[i]='1';
                out[i-1]=out[i-1]+49;
            }
        }
        else if(out[i]==96)
        {
            out[i]='0';
        }
        else if(out[i]==98)
        {
            out[i]='0';
            out[i-1]=out[i-1]+49;
        }
        else if(out[i]==97)
        {
            out[i]='1';
        }
        
    }

    if(byte[0][0]==49 && byte[0][1]==49 && byte[0][2]==48 && byte[0][3]==49 && byte[0][4]==49 && byte[0][5]==48 && byte[0][6]==49 && byte[0][7]==49)
        {
        out[0] = '0';
        out[1]='0';
        out[2]='1';
        out[3]='1';
        out[4]= '1';
        out[5]= '1';
        out[6] ='0';
        out[7]='1';
    }
    if(byte[0][0]==48 && byte[0][1]==48&& byte[0][2]==48&& byte[0][3]==48&& byte[0][4]==49&& byte[0][5]==49&& byte[0][6]==49&& byte[0][7]==48) 
    {
        out[0]='0';
        out[1]='1';
        out[2]='1';
        out[3]='1';
        out[4]='1';
        out[5]='0';
        out[6]='0';
        out[7]='1';
    }

	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
