//김규환(gyuhwan)_point_100
#define _CRT_SECURE_NO_WARNINGS
  #define PI 3.14

double get(int b, int h);

int main()
{
	int B, H;
	double out;

	scanf("%d %d", &B, &H);

	////////////////////////////////////////

    out = get(B, H);

	////////////////////////////////////////

	printf("%d\n", (int)out);

	return 0;
}

double get(int b, int h) {
    return 0.5 * PI * pow(b / 2.0, 2) * h * (1.0 / 3.0); 
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2d
uble_T2_F2_D2_L2int_T2_F2_D2_
2int_T2_D2_L2int_T2_D2_L2doub
e_T2_D2_D1s_E_F3_E_F3_A_D1s_L
int_T2_E_F3_D1i_R_C_F1_L2int_
2_D2_L2int_T2_D2_P2_L2double_
2_F2_D2_D1d_D1d_B*_D1d_B/_D1i
E_F3_B*_B*_D1d_D1d_B/_B*_R_C_
1_1_
###############################*/
//$//
