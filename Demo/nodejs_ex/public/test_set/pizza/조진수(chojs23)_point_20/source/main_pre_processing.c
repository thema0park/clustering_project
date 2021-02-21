//조진수(chojs23)_point_20
#define _CRT_SECURE_NO_WARNINGS

  #define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
    int count[50];
	int i;
    int k;
    int t;
	int output;
	scanf("%d", &piece_num);
    
	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    for(i=0;i<piece_num-1;i++)
    {
        for(k=1;k<piece_num-i;k++){
            if(input_data[i]>input_data[i+k]){
                t=input_data[i+k]%input_data[i];
                if(t!=0)
                count[i]++;
            }
            else if(input_data[i]<input_data[i+k]){
                t=input_data[i+k]%input_data[i];
                if(t!=0)
                count[i]++;
            }

            
        }
        if(count[i]>piece_num-1)
            output=input_data[i];
    }
    

	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_L2int_T2_D1i_D2_L
int_T2_D2_L2int_T2_D2_L2int_T
_D2_L2int_T2_D2_D1s_E_F3_D1i_
_B<_D1s_E_F3_FOR_D1i_A_D1i_B-
B<_D1i_A_B-_B<_B+_B>_B+_B%_A_
1i_B!=_L1_C_B+_B<_B+_B%_A_D1i
B!=_L1_C_L1_L1_C_FOR_D1i_B-_B
_A_L1_C_FOR_D1s_E_F3_D1i_R_C_
1_1_
###############################*/
//$//
