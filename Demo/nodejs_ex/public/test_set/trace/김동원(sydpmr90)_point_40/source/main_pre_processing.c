//김동원(sydpmr90)_point_40
#define _CRT_SECURE_NO_WARNINGS
  
int main()
{
	int b, h;
	double answer = 0;
    double r = 0;

    int cast = 0;

	scanf("%d %d", &b, &h);

 //   printf("%f %d\n",answer,cast);

    r = b/2.0;
    answer = pow(r,2.0) / 2 * 3.14 * h / 3;
    //answer = 0.5 * 3.14 * r * r * h / 3;
 //   printf("%f %d\n",answer,cast);

    //DEBUG2
    printf("%.lf\n",answer);

    answer *= 10;
    cast = answer;
//    printf("%f %d\n",answer,cast);

    if( ( cast % 10) >= 5 ){
        answer += 10;
    }

    answer /= 10;
    cast = answer;
    //DEBUG1
    //printf("%d\n",cast);
    

	////////////////////////////////////////

/*
    answer *= 10;
    if(((int)answer % 10) >= 5){
        answer += 10;
    }
    answer /= 10;
*/
    //printf("%.lf\n",answer);
	//printf("%.lf\n", answer);

	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2double_T2_D1i_D2_L2
ouble_T2_D1i_D2_L2int_T2_D1i_
2_D1s_E_F3_D1d_B/_A_D1d_E_F3_
1i_B/_D1d_B*_B*_D1i_B/_A_D1s_
_F3_D1i_A_A_D1i_B%_D1i_B>=_D1
_A_C_L1_D1i_A_A_D1i_R_C_F1_1_
###############################*/
//$//
