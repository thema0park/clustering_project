//박민석(apark0907)_point_100
#define _CRT_SECURE_NO_WARNINGS
 int flag=0;
#define BYTE_SIZE 8
#define IN_NUM 2
char re(char a,char b){
    if(flag==0){
        if(a=='0'&&b=='0')return '0';
        if(a=='1'&&b=='0'||a=='0'&&b=='1')return '1';
        if(a=='1'&&b=='1'){
            flag=1;
            return '0';
        }
       
    }
    if(flag==1){
        if(a=='0'&&b=='0'){
            flag=0;
            return '1';
        }
        if(a=='1'&&b=='0'||a=='0'&&b=='1'){
            flag=1;
            return '0';
        }
        if(a=='1'&&b=='1'){
            flag=1;
            return '1';
        }
    }
}
int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);
    int j;
    for(j=0;j<8;j++){
        if(byte[0][j]!='0'&&byte[0][j]!='1'||byte[1][j]!='0'&&byte[1][j]!='1'){
            printf("Input Error\n");
            return 0;
        }
    }
	////////////////////////////////////////
    int i;
    for(i=7;i>=0;i--){
        //printf("%c %c re=%c %d\n",byte[0][i],byte[1][i],re(byte[0][i],byte[1][i]),flag);
        out[i]=re(byte[0][i],byte[1][i]);
    }

	////////////////////////////////////////

	printf("%s\n", out);
    
	return 0;
}
/*########code signature#########
2int_T2_D1i_D2_L2char_T2_D2_L
char_T2_D2_P2_L2char_T2_F2_D2
D1i_B==_D1c_B==_D1c_B==_B&&_D
c_R_L1_D1c_B==_D1c_B==_B&&_D1
_B==_D1c_B==_B&&_B||_D1c_R_L1
D1c_B==_D1c_B==_B&&_D1i_A_D1c
R_C_L1_C_L1_D1i_B==_D1c_B==_D
c_B==_B&&_D1i_A_D1c_R_C_L1_D1
_B==_D1c_B==_B&&_D1c_B==_D1c_
==_B&&_B||_D1i_A_D1c_R_C_L1_D
c_B==_D1c_B==_B&&_D1i_A_D1c_R
C_L1_C_L1_C_F1_L2int_T2_F2_D2
L2char_T2_D1i_D1i_B+_D1i_D2_L
char_T2_D1i_D1i_B+_D2_D1s_D1i
D1i_E_F3_L2int_T2_D2_D1i_A_D1
_B<_D1i_D1c_B!=_D1i_D1c_B!=_B
&_D1i_D1c_B!=_D1i_D1c_B!=_B&&
B||_D1s_E_F3_D1i_R_C_L1_C_FOR
L2int_T2_D2_D1i_A_D1i_B>=_D1i
D1i_E_F3_A_C_FOR_D1s_E_F3_D1i
R_C_F1_1_
###############################*/
//$//
