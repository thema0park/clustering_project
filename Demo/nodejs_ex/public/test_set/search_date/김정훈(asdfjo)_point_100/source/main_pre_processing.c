//김정훈(asdfjo)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K;
	int h;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);

	////////////////////////////////////////

    h = (int)((q + floor((double)((m+1)*26)/10) + K + floor((double)(K/4))+floor((double)(J/4)) + 5 * J)) % 7 ;

    if (h==0)
    {
        printf("Saturday\n");
    }
    else if (h==1)
    {
        printf("Sunday\n");
    }
    else if (h==2)
    {
        printf("Monday\n");
    }
    else if (h==3)
    {
        printf("Tuesday\n");
    }
    else if (h==4)
    {
        printf("Wednesday\n");
    }
    else if (h==5)
    {
        printf("Thursday\n");
    }
    else if (h==6)
    {
        printf("Friday\n");
    }




	////////////////////////////////////////

//	printf("%s\n", week[h]);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2char_T2_D1i_D
i_D1s_D1s_D1s_D1s_D1s_D1s_D1s
D2_D1s_E_F3_L2int_T2_L2double
T2_D1i_B+_D1i_B*_D1i_B/_E_F3_
+_B+_L2double_T2_D1i_B/_E_F3_
+_L2double_T2_D1i_B/_E_F3_B+_
1i_B*_B+_D1i_B%_A_D1i_B==_D1s
E_F3_C_D1i_B==_D1s_E_F3_C_D1i
B==_D1s_E_F3_C_D1i_B==_D1s_E_
3_C_D1i_B==_D1s_E_F3_C_D1i_B=
_D1s_E_F3_C_D1i_B==_D1s_E_F3_
_L1_L1_L1_L1_L1_L1_L1_D1i_R_C
F1_1_
###############################*/
//$//
