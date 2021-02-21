//노태형(hjth091)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	float b, h;
	int out;

	scanf("%f %f", &b, &h);
    if (b>=1&&b<=100&&h>=1&&h<=100)
    {
        if (b!=1)
            b=(b/2);
        else 
            b=0.5;
        b=b*b;
        out=b*0.5*h*3.14;
        out=out/3;
    	printf("%d\n", out);
    }

	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2float_T2_D2_L
float_T2_D2_L2int_T2_D2_D1s_E
F3_D1i_B>=_D1i_B<=_B&&_D1i_B>
_B&&_D1i_B<=_B&&_D1i_B!=_D1i_
/_A_D1d_A_L1_B*_A_D1d_B*_B*_D
d_B*_A_D1i_B/_A_D1s_E_F3_C_L1
D1i_R_C_F1_1_
###############################*/
//$//
