//김규환(gyuhwan)_point_90
#define _CRT_SECURE_NO_WARNINGS
 #define NONE '0'
#define N 'a'
#define M 'M'
#define W 'W'
#define INF 1E9;

char board[5][6] = {
    { W, N, N, N, N, N, M }, // 0
    { M, N, N, N, N, N, W }, // 1
    { W, N, N, N, N, N, M }, // 2
    { M, N, N, N, N, N, W }, // 3
    { NONE, N, N, N, N, N, NONE } // 4
};

int d[2] = {
    1, -1
};

int min(int a, int b) {
    return a > b ? b : a;
}

int search2(char gender, int floor, int l, int di, int state) {
    int validFloor = floor >= 0 && floor <= 4;
    int validL = l >= 0 && l <= 6; 

    if (!(validFloor && validL))
        return INF;

    while (board[floor][l] != gender) {
        if (di == 0)
            --l;
        else
            ++l;    

        state++;

        if (board[floor][l] != N) {
            break;
        }
    }

    return board[floor][l] == gender ? state : INF;
}

int solve(char gender, int floor, int l) {
    int result = INF;
    int i;

    floor = floor - 1;

    for (i = 0; i < 6; i++) {
        result = min(result, search2(gender, floor - i, l, 1, i));
        result = min(result, search2(gender, floor - i, l, 0, i));
        result = min(result, search2(gender, floor + i, l, 1, i));
        result = min(result, search2(gender, floor + i, l, 0, i));
    }
    // result = search2(gender, floor, l, 0, 1);
    // result = min(result, search2(gender, floor, l, 1, 1));
    // result = min(result, search2(gender, floor - 1, l, 0, 0));
    // result = min(result, search2(gender, floor - 1, l, 1, 0));
    // result = min(result, search2(gender, floor - 2, l, 0, 1));
    // result = min(result, search2(gender, floor - 2, l, 1, 1));

    return result;
}

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////

    out = solve(gender, f, l);
	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2char_T2_D1i_D1i_D1c_D1c_D1c_
1c_D1c_D1c_D1c_D1c_D1c_D1c_D1
_D1c_D1c_D1c_D1c_D1c_D1c_D1c_
1c_D1c_D1c_D1c_D1c_D1c_D1c_D1
_D1c_D1c_D1c_D1c_D1c_D1c_D1c_
1c_D1c_D2_L2int_T2_D1i_D1i_D1
_D2_L2int_T2_D2_L2int_T2_D2_P
_L2int_T2_F2_D2_B>_R_C_F1_L2c
ar_T2_D2_L2int_T2_D2_L2int_T2
D2_L2int_T2_D2_L2int_T2_D2_P2
L2int_T2_F2_D2_L2int_T2_D1i_B
=_D1i_B<=_B&&_D2_L2int_T2_D1i
B>=_D1i_B<=_B&&_D2_B&&_D1d_R_
1_B!=_D1i_B==_L1_D1c_B!=_C_L1
C_W_B==_D1d_R_C_F1_L2char_T2_
2_L2int_T2_D2_L2int_T2_D2_P2_
2int_T2_F2_D2_L2int_T2_D1d_D2
L2int_T2_D2_D1i_B-_A_D1i_A_D1
_B<_B-_D1i_E_F3_E_F3_A_B-_D1i
E_F3_E_F3_A_B+_D1i_E_F3_E_F3_
_B+_D1i_E_F3_E_F3_A_C_FOR_R_C
F1_L2int_T2_F2_D2_L2char_T2_D
_L2int_T2_D2_L2int_T2_D2_L2in
_T2_D2_D1s_E_F3_E_F3_A_D1s_E_
3_D1i_R_C_F1_1_
###############################*/
//$//
