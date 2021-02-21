//박소은(chooun77)_point_0
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int gcd(int a, int b){
    int n;
    for(n=2;n<a||n<b;n++){
        if(a%n==0 && b%n==0){
            return 1;
        }
        else {return 0;}
    }

}


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
    int k,j;
    for(k=0;k<piece_num;k++){
        

    }


	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_D2_D1i_A_
<_B<_B||_B%_D1i_B==_B%_D1i_B=
_B&&_D1i_R_C_D1i_R_C_L1_C_FOR
C_F1_L2int_T2_F2_D2_L2int_T2_
2_L2int_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_D1s_E_F3_D1i_A_B<
D1s_E_F3_FOR_L2int_T2_D2_L2in
_T2_D2_D1i_A_B<_C_FOR_D1s_E_F
_D1i_R_C_F1_1_
###############################*/
//$//
