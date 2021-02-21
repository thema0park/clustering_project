//김문만(moonman0429)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
int a[6][7] = {};

int main()
{
	char gender;
	int f, l;
	int min = 999;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    a[1][0] = 2, a[3][0] = 2; a[4][6] = 2; a[2][6] = 2;
    a[2][0] = 1; a[4][0] = 1; a[1][6] = 1; a[3][6] = 1;
    if(gender == 'M'){
        int i;
        int boy[4][2] = {1,6,2,0,3,6,4,0};
        for(i = 0; i<4; i++){
            if(abs(f-boy[i][0]) + abs(l-boy[i][1]) < min) min = abs(f-boy[i][0]) + abs(l-boy[i][1]);
        }
    }
    if(gender == 'W'){
        int i;
        int girl[4][2] = {1,0,2,6,3,0,4,6};
        for(i = 0; i<4; i++){
            if(abs(f-girl[i][0]) + abs(l-girl[i][1]) < min) min = abs(f-girl[i][0]) + abs(l-girl[i][1]);
        }
    }


	
	////////////////////////////////////////

	printf("%d\n", min);
	return 0;
}/*########code signature#########
2int_T2_D1i_D1i_D2_L2int_T2_F
_D2_L2char_T2_D2_L2int_T2_D2_
2int_T2_D2_L2int_T2_D1i_D2_D1
_E_F3_D1i_D1i_D1i_A_D1i_D1i_D
i_A_E_D1i_D1i_D1i_A_D1i_D1i_D
i_A_D1i_D1i_D1i_A_D1i_D1i_D1i
A_D1i_D1i_D1i_A_D1i_D1i_D1i_A
D1c_B==_L2int_T2_D2_L2int_T2_
1i_D1i_D1i_D1i_D1i_D1i_D1i_D1
_D1i_D1i_D2_D1i_A_D1i_B<_D1i_
-_E_F3_D1i_B-_E_F3_B+_B<_D1i_
-_E_F3_D1i_B-_E_F3_B+_A_L1_C_
OR_C_L1_D1c_B==_L2int_T2_D2_L
int_T2_D1i_D1i_D1i_D1i_D1i_D1
_D1i_D1i_D1i_D1i_D2_D1i_A_D1i
B<_D1i_B-_E_F3_D1i_B-_E_F3_B+
B<_D1i_B-_E_F3_D1i_B-_E_F3_B+
A_L1_C_FOR_C_L1_D1s_E_F3_D1i_
_C_F1_1_
###############################*/
//$//
