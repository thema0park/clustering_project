//김성국(sungkuk0620)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    char u[9]={'0','0','0','0','0','0','0','0','0'};
    int i=0;

	scanf("%s %s", byte[0], byte[1]);
    for(i=8;i>-1;i--){

    if((byte[0][i]=='0'||byte[0][i]=='1')&&(byte[1][i]=='0'||byte[1][i]=='1')){
        if(byte[0][i]+byte[1][i]+u[i]-'0'-'0'-'0'==1){
            out[i]='1';

        }
        else if(byte[0][i]+byte[1][i]+u[i]-'0'-'0'-'0'==0){
            out[i]='0';
        }
        else if(byte[0][i]+byte[1][i]+u[i]-'0'-'0'-'0'==2){
            out[i]='0';
            u[i-1]='1';
        }
        else if(byte[0][i]+byte[1][i]+u[i]-'0'-'0'-'0'==3){
            out[i]='1';
            u[i-1]='1';
        }
    }
    }

   
	////////////////////////////////////////



	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2char_T2_D1i_D1c_D1c_D
c_D1c_D1c_D1c_D1c_D1c_D1c_D2_
2int_T2_D1i_D2_D1s_D1i_D1i_E_
3_D1i_A_D1i_B>_D1i_D1c_B==_D1
_D1c_B==_B||_D1i_D1c_B==_D1i_
1c_B==_B||_B&&_D1i_D1i_B+_B+_
1c_B-_D1c_B-_D1c_B-_D1i_B==_D
c_A_C_D1i_D1i_B+_B+_D1c_B-_D1
_B-_D1c_B-_D1i_B==_D1c_A_C_D1
_D1i_B+_B+_D1c_B-_D1c_B-_D1c_
-_D1i_B==_D1c_A_D1i_B-_D1c_A_
_D1i_D1i_B+_B+_D1c_B-_D1c_B-_
1c_B-_D1i_B==_D1c_A_D1i_B-_D1
_A_C_L1_L1_L1_L1_C_L1_C_FOR_D
s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
