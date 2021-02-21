//이상현(leesh1510)_point_0
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
    int i, j;
    char input[IN_NUM][BYTE_SIZE+1];
    char out[BYTE_SIZE+1];
    scanf("%s %s",input[0],input[1]);
    for (i=0;i<8;i++){
        out[i]=input[0][i]+input[1][i];
    }
    for (j=7;j>0;j--){
        if (out[j]==2){
            out[j]=0; out[j-1]=out[j-1]+1;
        }
    }
    if (out[0]==2) out[0]==0;
    atoi(out);
    printf("%d",out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2char_T2_D1i_D1i_B+_
1i_D2_L2char_T2_D1i_D1i_B+_D2
D1s_D1i_D1i_E_F3_D1i_A_D1i_B<
D1i_D1i_B+_A_C_FOR_D1i_A_D1i_
>_D1i_B==_D1i_A_D1i_B-_D1i_B-
D1i_B+_A_C_L1_C_FOR_D1i_D1i_B
=_D1i_D1i_B==_L1_E_F3_D1s_E_F
_D1i_R_C_F1_1_
###############################*/
//$//
