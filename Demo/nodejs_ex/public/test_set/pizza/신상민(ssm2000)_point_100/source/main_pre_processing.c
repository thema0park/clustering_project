//신상민(ssm2000)_point_100
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int gcd(int a, int b){
    return a%b ? gcd(b, a%b) : b ;
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

    for(i=0;i<piece_num;i++){
        int j;
        int flg = 1;
        for(j=0;j<piece_num;j++){
            if(j==i) continue;
            int cur;
            if(j<i && i<=j+piece_num/2){
                cur = j+piece_num/2+1;
            }else{
                cur = j+piece_num/2;
            }
            if(cur >= piece_num) continue;
            if(gcd(input_data[j], input_data[cur])<=1){
                flg = 0;
                break;
            }
        }
        if(flg){
            output = input_data[i];
            break;
        }
    }

	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_B%_B%_E_F3_R_C_F1_
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_L2int_T2_D2_L2int
T2_D2_D1s_E_F3_D1i_A_B<_D1s_E
F3_FOR_D1i_A_B<_L2int_T2_D2_L
int_T2_D1i_D2_D1i_A_B<_B==_L1
L2int_T2_D2_B<_D1i_B/_B+_B<=_
&&_D1i_B/_B+_D1i_B+_A_C_D1i_B
_B+_A_C_L1_B>=_L1_E_F3_D1i_B<
_D1i_A_C_L1_C_FOR_A_C_L1_C_FO
_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
