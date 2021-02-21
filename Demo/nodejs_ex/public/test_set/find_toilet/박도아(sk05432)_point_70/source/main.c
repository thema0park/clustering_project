#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i=0;
    int flag=0;
    int she=1;
	scanf("%s %s", byte[0], byte[1]);


    

    




    for(i=7;i>=0;i--)
    {


    if(byte[1][i]=='0'&&byte[0][i]=='1'||byte[1][i]=='1'&&byte[0][i]=='0')
    {
        if(flag==1){
            out[i]='0';
        }
       else
       {
           out[i]='1';
           }
        
    }
    else
    {
        if(flag==1)
        {
            out[i]='1';
            flag=0;
            
        }
        else
        {
            out[i]='0';
        }

        if(byte[1][i]=='1'&&byte[0][i]=='1')
    {
        if(flag==1)
        out[i]='1';
        flag=1;
    }
        
    

        
        }
    }

if(strlen(byte)!=8)
{
    printf("Input Error\n");
}
else
{
if(out[0]=='0'&&out[1]=='0'&&out[2]=='0'&&out[3]=='0'&&out[4]=='0'&&out[5]=='0'&&out[6]=='0'&&out[7]=='0')
{    printf("Input Error\n");
}

else
{
  
    printf("%s\n", out);
}
}




	////////////////////////////////////////



	////////////////////////////////////////

	

	return 0;
}
