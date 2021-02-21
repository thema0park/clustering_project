#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2
int de(char ch){
    if(ch == '0') return 0;
    if(ch == '1') return 1;
    else printf("Input Error\n");

}
int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	int out[BYTE_SIZE+1] = {0,};
    int i=0;
	scanf("%s %s", byte[0], byte[1]);
    int temp1;
    int temp2;
    int upper=0;
	////////////////////////////////////////
    for(i=0;i<8;i++){
        temp1 = de(byte[0][7-i]);
        temp2 = de(byte[1][7-i]);
   //     printf("tmp1 %d tmp2 %d",temp1,temp2);
     
         
     // printf("upper +fir + sec %d +%d + %d = %d\n",upper,temp1,temp2,temp1+temp2+upper);
        if(temp1+temp2+upper == 0) {out[i] = 0;upper =0;printf("%d",out[i]);}
        if(temp1+temp2+upper == 1) {out[i] = 1; upper =0;printf("%d",out[i]);}
        if(temp1+temp2+upper == 3) {out[i] = 1;upper=1;printf("%d",out[i]);}

        if(temp1+temp2+upper == 2) {out[i] = 0; printf("%d",out[i]); upper=1; }
  


      // if(temp1+temp2+upper != 2) printf("%d:%d\n",i,out[i]);

    }

printf("\n");
	////////////////////////////////////////

//	printf("%s\n", out);

	return 0;
}
