//신지항(tlswlgkd565)_point_60
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	int b, h;
	int out;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    if(b<1 || b>100 || h<1 || h>100)
        return 0;
    
    float t;

    t=0.5*3.14*(b/2)*(b/2)*h/3;

    out=(int)t;

	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_D1s_E_F3_
1i_B<_D1i_B>_B||_D1i_B<_B||_D
i_B>_B||_D1i_R_L1_L2float_T2_
2_D1d_D1d_B*_D1i_B/_B*_D1i_B/
B*_B*_D1i_B/_A_L2int_T2_A_D1s
E_F3_D1i_R_C_F1_1_
###############################*/
//$//
