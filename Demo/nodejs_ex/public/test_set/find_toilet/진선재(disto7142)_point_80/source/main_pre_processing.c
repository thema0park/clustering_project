//진선재(disto7142)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    int i;
    if(l==3 && f!=5) out=3;
    else if(f==5 && l==3) out=4;
    if(l<3) out=l;
    else if(l>3) out=6-l;
    if(f%2==1 && gender=='W' && l>3) out++;
    else if(f%2==0 && gender=='M' && l>3) out++;
    if(f==5 && gender=='W' && l<3) out++;
    if(f==5 && gender=='M' && l>3) out++;
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_L2int_T2_D2_D1i_B
=_D1i_B!=_B&&_D1i_A_D1i_B==_D
i_B==_B&&_D1i_A_L1_L1_D1i_B<_
_D1i_B>_D1i_B-_A_L1_L1_D1i_B%
D1i_B==_D1c_B==_B&&_D1i_B>_B&
_D1i_B%_D1i_B==_D1c_B==_B&&_D
i_B>_B&&_L1_L1_D1i_B==_D1c_B=
_B&&_D1i_B<_B&&_L1_D1i_B==_D1
_B==_B&&_D1i_B>_B&&_L1_D1s_E_
3_D1i_R_C_F1_1_
###############################*/
//$//
