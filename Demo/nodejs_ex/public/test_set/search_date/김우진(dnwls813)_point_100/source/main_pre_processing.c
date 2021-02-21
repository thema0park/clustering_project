//김우진(dnwls813)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	int q, m, k, j,num1=0,num2=0,num3=0;
	int h;
    scanf("%d %d %d %d",&q,&m,&k,&j);
    num1=((m+1)*26)/10;
    num2=k/4;
    num3=j/4;
    h=(q+num1+k+num2+num3+5*j)%7;
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
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D1i_D2_L2int_T2_D1
_D2_L2int_T2_D1i_D2_L2int_T2_
2_D1s_E_F3_D1i_B+_D1i_B*_D1i_
/_A_D1i_B/_A_D1i_B/_A_B+_B+_B
_B+_D1i_B*_B+_D1i_B%_A_D1i_B=
_D1s_E_F3_C_D1i_B==_D1s_E_F3_
_D1i_B==_D1s_E_F3_C_D1i_B==_D
s_E_F3_C_D1i_B==_D1s_E_F3_C_D
i_B==_D1s_E_F3_C_D1i_B==_D1s_
_F3_C_L1_L1_L1_L1_L1_L1_L1_C_
1_1_
###############################*/
//$//
