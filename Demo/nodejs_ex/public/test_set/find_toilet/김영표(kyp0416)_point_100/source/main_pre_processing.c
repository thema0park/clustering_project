//김영표(kyp0416)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
    char map_m[5][6] = {
        {'W',2,3,3,2,1,'M'},
        {'M',1,2,3,3,2,'W'},
        {'W',2,3,3,2,1,'M'},
        {'M',1,2,3,3,2,'W'},
        {'N',2,3,4,4,3,'N'}
    };
    char map_w[5][6] = {
        {'W',1,2,3,3,2,'M'},
        {'M',2,3,3,2,1,'W'},
        {'W',1,2,3,3,2,'M'},
        {'M',2,3,3,2,1,'W'},
        {'N',3,4,4,3,2,'N'}
    };
	char gender;
	int f, l, i, j, cost_ru = 0, cost_lu = 0, cost_rd = 0, cost_ld = 0;
	int out;

	scanf("%c %d %d", &gender, &f, &l);
	////////////////////////////////////////

    if(gender == 'M'){
        out = map_m[f-1][l];
    }
    else{
        out = map_w[f-1][l];
   }

	////////////////////////////////////////
	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_D1c_D1i_D1i_D1i_D1i_D1i_D1c
D1c_D1i_D1i_D1i_D1i_D1i_D1c_D
c_D1i_D1i_D1i_D1i_D1i_D1c_D1c
D1i_D1i_D1i_D1i_D1i_D1c_D1c_D
i_D1i_D1i_D1i_D1i_D1c_D2_L2ch
r_T2_D1i_D1i_D1c_D1i_D1i_D1i_
1i_D1i_D1c_D1c_D1i_D1i_D1i_D1
_D1i_D1c_D1c_D1i_D1i_D1i_D1i_
1i_D1c_D1c_D1i_D1i_D1i_D1i_D1
_D1c_D1c_D1i_D1i_D1i_D1i_D1i_
1c_D2_L2char_T2_D2_L2int_T2_D
_L2int_T2_D2_L2int_T2_D2_L2in
_T2_D2_L2int_T2_D1i_D2_L2int_
2_D1i_D2_L2int_T2_D1i_D2_L2in
_T2_D1i_D2_L2int_T2_D2_D1s_E_
3_D1c_B==_D1i_B-_A_C_D1i_B-_A
C_L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
