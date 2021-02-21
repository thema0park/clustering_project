//주호세(hose123)_point_60
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    char a[BYTE_SIZE+1]={0};
    int i;
    int j;
	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    for(j=0;j<=BYTE_SIZE;j++){
        if(byte[0][i]=='0'||byte[1][i]=='0')
            ;
        else if(byte[0][i]=='1'||byte[1][i]=='1')
            ;
        else{
            printf("Input Error\n");
            break;
        }
    }


    for(i=7;i>=0;i--){
        if(byte[0][i]=='1'&&byte[1][i]=='1'){
            if(a[i]=='1'){
                a[i-1]='1';
                out[i]='1'; 
            }
            else{
            a[i-1]='1';
            out[i]='0';
            }

        }
        else if(byte[0][i]=='1'&&byte[1][i]=='0'){
            if(a[i]=='1'&&i!=0){
                out[i]='0';
                a[i-1]='1';
            }
            else
            out[i]='1';
        }
        else if(byte[0][i]=='0'&&byte[1][i]=='1'){
            if(a[i]=='1'&&i!=0){
                out[i]='0';
                a[i-1]='1';
             }
            else
            out[i]='1';
        }  
        else{
            if(a[i]=='1'&&i!=0){
                out[i]='1';
            }
            else
            out[i]='0';
        }  
    }

	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2char_T2_D1i_D1i_B+_D1
_D2_L2int_T2_D2_L2int_T2_D2_D
s_D1i_D1i_E_F3_D1i_A_D1i_B<=_
1i_D1c_B==_D1i_D1c_B==_B||_D1
_D1c_B==_D1i_D1c_B==_B||_D1s_
_F3_C_L1_L1_C_FOR_D1i_A_D1i_B
=_D1i_D1c_B==_D1i_D1c_B==_B&&
D1c_B==_D1i_B-_D1c_A_D1c_A_C_
1i_B-_D1c_A_D1c_A_C_L1_C_D1i_
1c_B==_D1i_D1c_B==_B&&_D1c_B=
_D1i_B!=_B&&_D1c_A_D1i_B-_D1c
A_C_D1c_A_L1_C_D1i_D1c_B==_D1
_D1c_B==_B&&_D1c_B==_D1i_B!=_
&&_D1c_A_D1i_B-_D1c_A_C_D1c_A
L1_C_D1c_B==_D1i_B!=_B&&_D1c_
_C_D1c_A_L1_C_L1_L1_L1_C_FOR_
1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
