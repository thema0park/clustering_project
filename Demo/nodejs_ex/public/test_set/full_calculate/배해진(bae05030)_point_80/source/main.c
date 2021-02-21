#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#define BYTE_SIZE 8
#define IN_NUM 2
//2^9-1
int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];//null포함
	char out[BYTE_SIZE+1];//
    int num=0;
    int sum=0;
    int i;
    int count=0;
	scanf("%s %s", byte[0], byte[1]);

    for(i=0;i<=7;i++){
        if(!(byte[0][i]=='1'||byte[0][i]=='0')){
            printf("Input Error");
            return 0;
        }
    }
    for(i=0;i<=7;i++){
        if(!(byte[1][i]=='1'||byte[1][i]=='0')){
            printf("Input Error");
            return 0;
        }
    }
    for(i=7;i>=0;i--){
        //printf("%d%c%c\n",count,byte[0][i],byte[1][i]);
        if(byte[1][i]=='0'&&byte[0][i]=='0'){//0
            if(count==1){
                out[i]='1';
                count=0;
                continue;
            }else{//0
                out[i]='0';
                count=0;
                continue;
            }
        }else if(byte[0][i]=='1'&&byte[1][i]=='1'){//0
            if(count==1){
                out[i]='1';
                count=1;
                continue;
            }else{//0
                out[i]='0';
                count=1;
                continue;
            }
        }else{//1 0
            if(count==1){
                out[i]='0';
                count=1;
                continue;
            }else{
                out[i]='1';
                count=0;
                continue;
            }
            
        }
        /*else if(byte[0][i]=='1'&&byte[1][i]=='0'){//1
            if(count==1){
                out[i]='0';
                count=1;
                continue;
            }else{
                out[i]='1';
                count=0;
                continue;
            }
        }else if(byte[1][i]=='1'&&byte[0][i]=='0'){//1
            if(count==1){
                out[i]='0';
                count=1;
                continue;
            }else{
                out[i]='1';
                count=0;
                continue;
            }
        }*///1
    }
    out[8]='\0';
	printf("%s\n", out);

	return 0;
}
//11002121
/*int main(){
    char byte[IN_NUM][BYTE_SIZE + 1];//null포함
	char out[BYTE_SIZE+1];//
    int num=0;
    int sum=0;
    int i,j,k;
    int out=0;
	scanf("%s %s", byte[0], byte[1]);
    int num1=atoi(byte[0]);
    int num2=atoi(byte[1]);
    sum=num1+num2;
    for(i=1,j=1;i<9;i++){
        j*=10;
        if(sum%j==0){
            out=(j/10)*(sum%j);
            sum-=out;
        }else if(sum%j==1){
            out=(j/10)*(sum%j);
            sum-=out;
        }else if(sum%j==2){
            out=
        }
    }
     return 0;
}*/
