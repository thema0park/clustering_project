//배해진(bae05030)_point_100
#define _CRT_SECURE_NO_WARNINGS
 /*
반원인 뿔 
1/2*pi*r^2*h*1/3
*/
int main()
{
	int b, h;
	long long int out;
    double out2;
	scanf("%d %d", &b, &h);
    double b2=(double)b/2;
    double h2=(double)h;
    double a=0.5;
    double c=(double)1/3;
    double pii=3.14;
    //printf("%lf",c);
    out2=(a)*(pii)*(b2)*(b2)*(h2)*(c);
    out=(1/2)*(3.14)*((double)b/2)*((double)b/2)*((double)h)*(1/3);
    //printf("%lf\n",(double)out2);
    printf("%lld\n",(long long int)out2);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2long_T2_D2_L2double
T2_D2_D1s_E_F3_L2double_T2_L2
ouble_T2_D1i_B/_D2_L2double_T
_L2double_T2_D2_L2double_T2_D
d_D2_L2double_T2_L2double_T2_
1i_D1i_B/_D2_L2double_T2_D1d_
2_B*_B*_B*_B*_B*_A_D1i_D1i_B/
D1d_B*_L2double_T2_D1i_B/_B*_
2double_T2_D1i_B/_B*_L2double
T2_B*_D1i_D1i_B/_B*_A_D1s_L2l
ng_T2_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
