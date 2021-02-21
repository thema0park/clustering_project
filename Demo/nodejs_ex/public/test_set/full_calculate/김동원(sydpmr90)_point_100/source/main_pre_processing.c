//김동원(sydpmr90)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define BYTE_SIZE 8
#define IN_NUM 2

int carry;

char fullAdder(int a,int b,int _carry){
    int sum = a+b+_carry;
    if(sum == 0){
        carry = 0;
        return '0';
    }
    if(sum == 1){
        carry = 0;
        return '1';
    }
    if(sum == 2){
        carry = 1;
        return '0';
    }
    if(sum == 3){
        carry = 1;
        return '1';
    }
    
}

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

    int i,j;
    int pos;

	scanf("%s %s", byte[0], byte[1]);

    for(j=0;j<2;++j){
    for(i = 0; i< strlen(byte[j]);++i){
        if(byte[j][i] == '0' || byte[j][i] == '1'){}
        else{printf("Input Error\n");return 0;}
    }}

    for(i=0;i<8;++i){
        out[i] = '0';
    }

    carry = 0;

	////////////////////////////////////////

    pos = 7;
    for(i=7;i>=0;--i){
        out[pos--] = fullAdder( (int)(byte[0][i] - '0') , (int)(byte[1][i] - '0'), carry);
    }

    out[8] = '\0';

	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_D2_L2int_T2_D2_L2int_
2_D2_L2int_T2_D2_P2_L2char_T2
F2_D2_L2int_T2_B+_B+_D2_D1i_B
=_D1i_A_D1c_R_C_L1_D1i_B==_D1
_A_D1c_R_C_L1_D1i_B==_D1i_A_D
c_R_C_L1_D1i_B==_D1i_A_D1c_R_
_L1_C_F1_L2int_T2_F2_D2_L2cha
_T2_D1i_D1i_B+_D1i_D2_L2char_
2_D1i_D1i_B+_D2_L2int_T2_D2_L
int_T2_D2_L2int_T2_D2_D1s_D1i
D1i_E_F3_D1i_A_D1i_B<_D1i_A_E
F3_B<_D1c_B==_D1c_B==_B||_C_D
s_E_F3_D1i_R_C_L1_C_FOR_C_FOR
D1i_A_D1i_B<_D1c_A_C_FOR_D1i_
_D1i_A_D1i_A_D1i_B>=_L2int_T2
D1i_D1c_B-_L2int_T2_D1i_D1c_B
_E_F3_A_C_FOR_D1i_D1c_A_D1s_E
F3_D1i_R_C_F1_1_
###############################*/
//$//
