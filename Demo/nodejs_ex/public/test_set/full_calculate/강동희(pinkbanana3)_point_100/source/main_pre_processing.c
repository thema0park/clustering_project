//강동희(pinkbanana3)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i,d,a,b; int c=0; int f=0;
    scanf("%s %s",byte[0],byte[1]);
    for(i=0;i<8;i++){
        if((byte[0][i]!='0'&&byte[0][i]!='1')||byte[1][i]!='0'&&byte[1][i]!='1') {
            f=-1;
            break;
        }
    }
	////////////////////////////////////////
    for(i=7;i>=0;i--){
        if(byte[0][i]=='1') a=1; else a=0;
        if(byte[1][i]=='1') b=1; else b=0;
        d=a+b+c;
        if(d>1){
            d=d-2;
            if(i!=0) c=1;
        }
        else c=0;
        if(d==0){
            out[i]='0';
        }
        else out[i]='1';
    }
    out[8]=NULL;

	////////////////////////////////////////
    if(f!=-1) printf("%s\n",out);
    else printf("Input Error\n");

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D2_L2int
T2_D1i_D2_L2int_T2_D1i_D2_D1s
D1i_D1i_E_F3_D1i_A_D1i_B<_D1i
D1c_B!=_D1i_D1c_B!=_B&&_D1i_D
c_B!=_D1i_D1c_B!=_B&&_B||_D1i
A_C_L1_C_FOR_D1i_A_D1i_B>=_D1
_D1c_B==_D1i_A_D1i_A_L1_D1i_D
c_B==_D1i_A_D1i_A_L1_B+_B+_A_
1i_B>_D1i_B-_A_D1i_B!=_D1i_A_
1_C_D1i_A_L1_D1i_B==_D1c_A_C_
1c_A_L1_C_FOR_D1i_A_D1i_B!=_D
s_E_F3_D1s_E_F3_L1_D1i_R_C_F1
1_
###############################*/
//$//
