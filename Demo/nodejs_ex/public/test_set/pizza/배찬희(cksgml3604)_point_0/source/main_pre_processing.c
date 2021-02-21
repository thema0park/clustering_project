//배찬희(cksgml3604)_point_0
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int fun (int a, int b){
    int tmp;
    while(b == 0){
        tmp =b;
        b=a%b;
        a=tmp;
    }
    return a;
}

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i, j;
	//int output;
    int a;

	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

    for (i=0;i<piece_num;i++){
        for (j=i+1;j<(piece_num);j++){
            a = fun(input_data[i],input_data[j]);
            if (a>1){
                input_data[i] = 0;
                input_data[j] = 0;
                i +=1;
                j +=i+1;
            }
        }
    }
    for (i=0;i<piece_num;i++){
        if (input_data[i] != 0){
            printf("%d\n",input_data[i]);
        }
    }
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_D2_D1i_B=
_A_B%_A_A_C_W_R_C_F1_L2int_T2
F2_D2_L2int_T2_D2_L2int_T2_D1
_D2_L2int_T2_D2_L2int_T2_D2_L
int_T2_D2_D1s_E_F3_D1i_A_B<_D
s_E_F3_FOR_D1i_A_B<_D1i_B+_A_
<_E_F3_A_D1i_B>_D1i_A_D1i_A_D
i_A_D1i_B+_A_C_L1_C_FOR_C_FOR
D1i_A_B<_D1i_B!=_D1s_E_F3_C_L
_C_FOR_D1i_R_C_F1_1_
###############################*/
//$//
