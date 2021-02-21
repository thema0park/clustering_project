//김민석(tntjd9514)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	int q, m, J, K;
	int h;

	scanf("%d %d %d %d", &q, &m, &K, &J);

    float b,bb,KK,JJ;
    int KKK,JJJ,bbb;
    b = ((m+1)*26)/10;

    bb = (float)b - (int)b;

    bbb = b - bb;
    KK = (float)(K/4)-(int)(K/4);
    KKK = (K/4) - (KK);
    JJ = (float)(J/4)-(int)(J/4);
    JJJ = (J/4) - (JJ);


    h = q+bbb+K+KKK+JJJ+5*J;

    h = h % 7;

    switch(h){
        case 0:
            printf("Saturday\n");
            break;
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
    }

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_D1s_E_F3_L2floa
_T2_D2_L2float_T2_D2_L2float_
2_D2_L2float_T2_D2_L2int_T2_D
_L2int_T2_D2_L2int_T2_D2_D1i_
+_D1i_B*_D1i_B/_A_L2float_T2_
2int_T2_B-_A_B-_A_L2float_T2_
1i_B/_L2int_T2_D1i_B/_B-_A_D1
_B/_B-_A_L2float_T2_D1i_B/_L2
nt_T2_D1i_B/_B-_A_D1i_B/_B-_A
B+_B+_B+_B+_D1i_B*_B+_A_D1i_B
_A_D1i_D1s_E_F3_D1i_D1s_E_F3_
1i_D1s_E_F3_D1i_D1s_E_F3_D1i_
1s_E_F3_D1i_D1s_E_F3_D1i_D1s_
_F3_C_D1i_R_C_F1_1_
###############################*/
//$//
