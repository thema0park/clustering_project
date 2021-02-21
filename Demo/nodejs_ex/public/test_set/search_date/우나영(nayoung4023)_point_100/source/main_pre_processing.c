//우나영(nayoung4023)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, j, k;
	int h;
    float h1,h2,h3;
    int h11,h22,h33;

	//char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &k, &j);

	////////////////////////////////////////
    h1=((m+1.0)*26.0)/10.0;
    h2=k/4.0;
    h3=j/4.0;
    h11=h1;
    h22=h2;
    h33=h3;
    h=(q+h11+k+h22+h33+(5*j))%7;
    if(h==0)
    {
        printf("Saturday\n");
    }
    else if(h==1)
    {
        printf("Sunday\n");
    }
    else if(h==2)
    {
        printf("Monday\n");
    }
    else if(h==3)
    {
        printf("Tuesday\n");
    }
    else if(h==4)
    {
        printf("Wednesday\n");
    }
    else if(h==5)
    {
        printf("Thursday\n");
    }
    else if(h==6)
    {
        printf("Friday\n");
    }

	////////////////////////////////////////

	//printf("%s\n", week[h]);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2float_T2_D2_L
float_T2_D2_L2float_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_D1s_E_F3_D1d_B+_D1d_B*_D1d_
/_A_D1d_B/_A_D1d_B/_A_A_A_A_B
_B+_B+_B+_D1i_B*_B+_D1i_B%_A_
1i_B==_D1s_E_F3_C_D1i_B==_D1s
E_F3_C_D1i_B==_D1s_E_F3_C_D1i
B==_D1s_E_F3_C_D1i_B==_D1s_E_
3_C_D1i_B==_D1s_E_F3_C_D1i_B=
_D1s_E_F3_C_L1_L1_L1_L1_L1_L1
L1_D1i_R_C_F1_1_
###############################*/
//$//
