//이동훈(oss002)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int fourcmp(int d1, int d2, int d3, int d4) {
    int num[4];
    num[0] = d1;
    num[1] = d2;
    num[2] = d3;
    num[3] = d4;
    int i,j;
    int temp;
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            if (num[i] > num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = num[i];
            }

        }
    }

    return num[0];
}

int abs(int a) {
    if (a >= 0) {
        return a;
    }
    if (a < 0) {
        return -a;
    }
}




int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    //여자 : (1,0), (2,6), (3,0), (4,6)
    //남자 : (1,6), (2,0), (3,6), (4,0)

    int d1,d2,d3,d4;
    if (l == 3 && f < 5) {
        out = 3;
    }
    else if(l == 3 && f ==5) {
        out = 4;
    }
    else {
        if(gender == 'W') {
            d1 = abs(f-1) + (l-0);
            d2 = abs(f-2) + (6-l);
            d3 = abs(f-3) + (l-0);
            d4 = abs(f-4) + (6-l);
        }

        else if(gender == 'M') {
            d1 = abs(f-1) + (6-l);
            d2 = abs(f-2) + (l-0);
            d3 = abs(f-3) + (6-l);
            d4 = abs(f-4) + (l-0);
        }
        out = fourcmp(d1,d2,d3,d4);
    }

    


	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_L2int_
2_D2_L2int_T2_D2_P2_L2int_T2_
2_D2_L2int_T2_D1i_D2_D1i_A_D1
_A_D1i_A_D1i_A_L2int_T2_D2_L2
nt_T2_D2_L2int_T2_D2_D1i_A_D1
_B<_D1i_B+_A_D1i_B<_B>_A_A_A_
_L1_C_FOR_C_FOR_D1i_R_C_F1_L2
nt_T2_D2_P2_L2int_T2_F2_D2_D1
_B>=_R_C_L1_D1i_B<_R_C_L1_C_F
_L2int_T2_F2_D2_L2char_T2_D2_
2int_T2_D2_L2int_T2_D2_L2int_
2_D2_D1s_E_F3_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_D1i_B==_D1i_B<_B&&_D1i_A_C_
1i_B==_D1i_B==_B&&_D1i_A_C_D1
_B==_D1i_B-_E_F3_D1i_B-_B+_A_
1i_B-_E_F3_D1i_B-_B+_A_D1i_B-
E_F3_D1i_B-_B+_A_D1i_B-_E_F3_
1i_B-_B+_A_C_D1c_B==_D1i_B-_E
F3_D1i_B-_B+_A_D1i_B-_E_F3_D1
_B-_B+_A_D1i_B-_E_F3_D1i_B-_B
_A_D1i_B-_E_F3_D1i_B-_B+_A_C_
1_L1_E_F3_A_C_L1_L1_D1s_E_F3_
1i_R_C_F1_1_
###############################*/
//$//
