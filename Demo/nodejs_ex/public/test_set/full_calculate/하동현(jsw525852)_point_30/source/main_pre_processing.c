//하동현(jsw525852)_point_30
#define _CRT_SECURE_NO_WARNINGS
 
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
/*########code signature#########
2char_T2_D2_P2_L2int_T2_F2_D2
D1c_B==_D1i_R_L1_D1c_B==_D1i_
_D1s_E_F3_L1_C_F1_L2int_T2_F2
D2_L2char_T2_D1i_D1i_B+_D1i_D
_L2int_T2_D1i_D1i_B+_D1i_D2_L
int_T2_D1i_D2_D1s_D1i_D1i_E_F
_L2int_T2_D2_L2int_T2_D2_L2in
_T2_D1i_D2_D1i_A_D1i_B<_D1i_D
i_B-_E_F3_A_D1i_D1i_B-_E_F3_A
B+_B+_D1i_B==_D1i_A_D1i_A_D1s
E_F3_C_L1_B+_B+_D1i_B==_D1i_A
D1i_A_D1s_E_F3_C_L1_B+_B+_D1i
B==_D1i_A_D1i_A_D1s_E_F3_C_L1
B+_B+_D1i_B==_D1i_A_D1s_E_F3_
1i_A_C_L1_C_FOR_D1s_E_F3_D1i_
_C_F1_1_
###############################*/
//$//
