//배찬희(cksgml3604)_point_60
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	int b, h;
	int out;
    double r;
	scanf("%d %d", &b, &h);

    if ((b > 100) || (b < 1))
        return 0;
    if ((h > 100) || (h < 1))
        return 0;

    r = b/2;
	r =  0.5 * 3.14 * (r * r) * h / 3;
    out = r;
	printf("%d\n", out);

	return 0;
}

//반원뿔
// 0.5(반원뿔) * 3.14(원주율) * 25^2(반지름의 제곱) * 6(원뿔 높이) * 1/3 이므로 부피는 대략 1962 m3 가 될 것이다. /*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2double_
2_D2_D1s_E_F3_D1i_B>_D1i_B<_B
|_D1i_R_L1_D1i_B>_D1i_B<_B||_
1i_R_L1_D1i_B/_A_D1d_D1d_B*_B
_B*_B*_D1i_B/_A_A_D1s_E_F3_D1
_R_C_F1_1_
###############################*/
//$//
