//장성호(qq9725)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if (gender == 'M') {
        if (l < 3) {
            if (f == 2 || f == 4) out = l;
            else out = l+1;
        }
        else if (l > 3) {
            l = 6-l;
            if (f == 2 || f == 4) out = l+1;
            else if (f == 5) out = l+2;
            else out = l;
        }
        else {
            if (f == 5) out = l+1;
            else out = l;
        }
    }

    else {
        if (l < 3) {
            if (f == 2 || f == 4) out = l+1;
            else if (f == 5) out = l+2;
            else out = l;
        }
        else if (l > 3) {
            l = 6-l;
            if (f == 2 || f == 4) out = l;
            else if (f == 5) out = l+1;
            else out = l+1;
        }
        else {
            if (f == 5) out = l+1;
            else out = l;
        }
    }
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1c_B==_D1i_B<_D1
_B==_D1i_B==_B||_A_D1i_B+_A_L
_C_D1i_B>_D1i_B-_A_D1i_B==_D1
_B==_B||_D1i_B+_A_D1i_B==_D1i
B+_A_A_L1_L1_C_D1i_B==_D1i_B+
A_A_L1_C_L1_L1_C_D1i_B<_D1i_B
=_D1i_B==_B||_D1i_B+_A_D1i_B=
_D1i_B+_A_A_L1_L1_C_D1i_B>_D1
_B-_A_D1i_B==_D1i_B==_B||_A_D
i_B==_D1i_B+_A_D1i_B+_A_L1_L1
C_D1i_B==_D1i_B+_A_A_L1_C_L1_
1_C_L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
