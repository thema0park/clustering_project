//이나정(leena9901)_point_10
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    int prime[PIECE_NUM_MAX];
    /*
    int j=0;
    int k=0;
    int l=0;
    int point=0;
    int 
    for (;k<piece_num;k++){
        for (;j<input_data[k];j++){
            if (inout_data[k]%j==0)
                point++;
        }
        if (point==0){
            prime[l]=input_data[k];                //소수이면 prime 배열에 순서대로 저장
            l++;
        }
    }
    */


    output=input_data[0];



	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_L2int_T2_D2_L2int
T2_D2_D1s_E_F3_D1i_A_B<_D1s_E
F3_FOR_L2int_T2_D1i_D2_D1i_A_
1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
