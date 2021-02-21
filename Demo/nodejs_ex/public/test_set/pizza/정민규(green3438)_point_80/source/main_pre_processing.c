//정민규(green3438)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if (gender == 'M'){
        if (l == 3) out = 3;
        else if (((l == 0) && ((f % 2) == 0)) || ((l == 6) && ((f == 3) || (f == 1)))) out = 0;
        else if (l < 3) {            
            if ((f % 2) == 0) out = l;
            else out = l + 1;
        }
        
        else if (l > 3) {            
            if ((f % 2) == 0) {
                out = 7 - l;
            }            
            else out = 6 - l;
        }
        if (f == 5) {
            if (l == 6) out++;
            if (l != 0) out++;
        }
        
    }

    else {
        if (l == 3) out = 3;
        else if (((l == 6) && ((f % 2) == 0)) || ((l == 0) && ((f == 3) || (f == 1)))) out = 0;
        else if(l < 3){
            if ((f % 2) == 0) out = l + 1;
            else out = l;
        }
        else if (l > 3) {
            if ((f % 2) == 0) out = 6 - l;
            else out = 7 - l;
        }
        if (f == 5) {
            if (l == 0) out++;
            if (l != 6) out++;
        }
    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1c_B==_D1i_B==_D
i_A_D1i_B==_D1i_B%_D1i_B==_B&
_D1i_B==_D1i_B==_D1i_B==_B||_
&&_B||_D1i_A_D1i_B<_D1i_B%_D1
_B==_A_D1i_B+_A_L1_C_D1i_B>_D
i_B%_D1i_B==_D1i_B-_A_C_D1i_B
_A_L1_C_L1_L1_L1_L1_D1i_B==_D
i_B==_L1_D1i_B!=_L1_C_L1_C_D1
_B==_D1i_A_D1i_B==_D1i_B%_D1i
B==_B&&_D1i_B==_D1i_B==_D1i_B
=_B||_B&&_B||_D1i_A_D1i_B<_D1
_B%_D1i_B==_D1i_B+_A_A_L1_C_D
i_B>_D1i_B%_D1i_B==_D1i_B-_A_
1i_B-_A_L1_C_L1_L1_L1_L1_D1i_
==_D1i_B==_L1_D1i_B!=_L1_C_L1
C_L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
