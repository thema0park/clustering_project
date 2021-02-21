//하동현(jsw525852)_point_60
#define _CRT_SECURE_NO_WARNINGS
  int main()
{
	int b, h;
	int out;
    float half;

	scanf("%d %d", &b, &h);
    if(h>100) {printf("Input Error\n"); return 0;}
   
    half = b/2;
   //  printf("%f\n",half);
 //   printf("half %f",half);

    float v=0;
	////////////////////////////////////////
    float ze;
    ze = pow(half,2);
  //  printf("%f",ze);
  //  printf("%f\n",v);
  //printf("ze %f h %d\n",ze,h);
    v = 0.52333333*ze*h;
    

	////////////////////////////////////////
    out = (int)v;
    printf("%d\n",out);
	//printf("%0.f\n", v);

	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2float_T
_D2_D1s_E_F3_D1i_B>_D1s_E_F3_
1i_R_C_L1_D1i_B/_A_L2float_T2
D1i_D2_L2float_T2_D2_D1i_E_F3
A_D1d_B*_B*_A_L2int_T2_A_D1s_
_F3_D1i_R_C_F1_1_
###############################*/
//$//
