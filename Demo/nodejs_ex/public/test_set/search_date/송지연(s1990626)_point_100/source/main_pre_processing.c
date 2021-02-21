//송지연(s1990626)_point_100
  
int main()
{
    int h;
    int q, m, K, J;

    scanf("%d %d %d %d", &q, &m, &K, &J);

    h=(q+((m+1)*26)/10+K+(K/4)+(J/4)+5*J)%7;

    if(h==0) printf("Saturday\n");
    else if(h==1) printf("Sunday\n");
    else if(h==2) printf("Monday\n");
    else if(h==3) printf("Tuesday\n");
    else if(h==4) printf("Wednesday\n");
    else if(h==5) printf("Thursday\n");
    else if(h==6) printf("Friday\n");


   return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_D1s_E_F3_D1i_B+
D1i_B*_D1i_B/_B+_B+_D1i_B/_B+
D1i_B/_B+_D1i_B*_B+_D1i_B%_A_
1i_B==_D1s_E_F3_D1i_B==_D1s_E
F3_D1i_B==_D1s_E_F3_D1i_B==_D
s_E_F3_D1i_B==_D1s_E_F3_D1i_B
=_D1s_E_F3_D1i_B==_D1s_E_F3_L
_L1_L1_L1_L1_L1_L1_D1i_R_C_F1
1_
###############################*/
//$//
