//이동훈(oss002)_point_40
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int GCD(a,b) {
    int temp;
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a%b == 0)
        return b;
    else
        return GCD(b,a%b);
}

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i,j;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    output = input_data[0];


    for (i = 0; i < piece_num-1; i++) {
        for (j = i + 1; j < piece_num; j++) {
            if(GCD(input_data[i],input_data[j]) == 1) {
                output = input_data[i];
            }
        }
    }




	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2_L2int_T2_F2_D2_L2int_T2_D2_
<_A_A_A_C_L1_B%_D1i_B==_R_B%_
_F3_R_L1_C_F1_L2int_T2_F2_D2_
2int_T2_D2_L2int_T2_D1i_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1i_A_B<_D1s_E_F3
FOR_D1i_A_D1i_A_D1i_B-_B<_D1i
B+_A_B<_E_F3_D1i_B==_A_C_L1_C
FOR_C_FOR_D1s_E_F3_D1i_R_C_F1
1_
###############################*/
//$//
