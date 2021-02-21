//홍수민(sumiiniii)_point_10
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX]={0};
	int i,j;
	int output;
    
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++){
		scanf("%d", &input_data[i]);
    }

    for(i=0;i<piece_num;i++){
        for(j=i+4;j<piece_num;j++){
            if(input_data[i]%input_data[j]!=0){
                output=input_data[j];
            }
            if(input_data[j]%input_data[i]!=0){
                output=input_data[i];
            }
        }
    }

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D1i_D2_L2int_T2_D2_L
int_T2_D2_L2int_T2_D2_D1s_E_F
_D1i_A_B<_D1s_E_F3_C_FOR_D1i_
_B<_D1i_B+_A_B<_B%_D1i_B!=_A_
_L1_B%_D1i_B!=_A_C_L1_C_FOR_C
FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
