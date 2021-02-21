//최윤석(cys1087)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i;
    char addcount='0';
    int errorcount=0;

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
for (i=0; i<BYTE_SIZE; i++) {
    if(byte[0][i] != '0'&&byte[0][i] != '1') {
        errorcount=1;
break;
    }
}
for (i=0; i<BYTE_SIZE; i++) {
    if(byte[1][i] != '0'&&byte[1][i] != '1') {
errorcount=1;
break;
    }
}

if (errorcount==1) printf("Input Error");
else if (errorcount==0) {
for (i=BYTE_SIZE-1; i>=0; i--) { 
    if (byte[0][i]==byte[1][i]) {
        out[i]=addcount;
        if (byte[0][i]=='0') addcount='0';
        else if (byte[0][i]=='1') addcount='1';
    }
    else if (byte[0][i]!=byte[1][i]) {
        if (addcount=='1') {
            out[i]='0';
            addcount='1';
        }
        else if (addcount=='0') out[i]='1';
    }
}
	////////////////////////////////////////
	printf("%s\n", out);
}

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D2_L2char_T2_D
c_D2_L2int_T2_D1i_D2_D1s_D1i_
1i_E_F3_D1i_A_D1i_B<_D1i_D1c_
!=_D1i_D1c_B!=_B&&_D1i_A_C_L1
C_FOR_D1i_A_D1i_B<_D1i_D1c_B!
_D1i_D1c_B!=_B&&_D1i_A_C_L1_C
FOR_D1i_B==_D1s_E_F3_D1i_B==_
1i_D1i_B-_A_D1i_B>=_D1i_D1i_B
=_A_D1i_D1c_B==_D1c_A_D1i_D1c
B==_D1c_A_L1_L1_C_D1i_D1i_B!=
D1c_B==_D1c_A_D1c_A_C_D1c_B==
D1c_A_L1_L1_C_L1_L1_C_FOR_D1s
E_F3_C_L1_L1_D1i_R_C_F1_1_
###############################*/
//$//
