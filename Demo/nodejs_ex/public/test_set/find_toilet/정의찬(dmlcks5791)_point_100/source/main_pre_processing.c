//정의찬(dmlcks5791)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;
    char arr[6][2] = {0, };

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    arr[1][0] = arr[2][1] = arr[3][0] = arr[4][1] = 'W';
    arr[1][1] = arr[2][0] = arr[3][1] = arr[4][0] = 'M';

    if(l == 3)
        out = 3;
    else if(l == 2 || l == 4)
        out = 2;
    else if(l == 1 || l == 5)
        out = 1;
    else if(l == 0 || l == 6)
        out = 0;
    
    if(f == 5)
    {
        out++;
        f--;
    }

    if(l < 3 && arr[f][0] != gender)
        out++;
    else if(3 < l && arr[f][1] != gender)
        out++;

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_L2char_T2_D1i_D1i_D1i_D2_D
s_E_F3_D1i_D1i_D1i_D1i_D1i_D1
_D1i_D1i_D1c_A_A_A_A_D1i_D1i_
1i_D1i_D1i_D1i_D1i_D1i_D1c_A_
_A_A_D1i_B==_D1i_A_D1i_B==_D1
_B==_B||_D1i_A_D1i_B==_D1i_B=
_B||_D1i_A_D1i_B==_D1i_B==_B|
_D1i_A_L1_L1_L1_L1_D1i_B==_C_
1_D1i_B<_D1i_B!=_B&&_D1i_B<_D
i_B!=_B&&_L1_L1_D1s_E_F3_D1i_
_C_F1_1_
###############################*/
//$//
