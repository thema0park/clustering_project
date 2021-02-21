//최윤석(cys1087)_point_100
#define _CRT_SECURE_NO_WARNINGS
  int getdistance(int floor, int line, char gender);

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
out=getdistance(f, l, gender);
	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}

int getdistance(int floor, int line, char gender) {
    int rowlen, columnlen;
    int distance=100, temp_d=100;
    if (gender=='M') {
    rowlen=abs(floor-2);
    columnlen=abs(line-0);
    temp_d=rowlen+columnlen;
    if(temp_d<distance) distance=temp_d;
    rowlen=abs(floor-4);
    columnlen=abs(line-0);
    temp_d=rowlen+columnlen;
    if(temp_d<distance) distance=temp_d;
    rowlen=abs(floor-1);
    columnlen=abs(line-6);
    temp_d=rowlen+columnlen;
    if(temp_d<distance) distance=temp_d;
    rowlen=abs(floor-3);
    columnlen=abs(line-6);
    temp_d=rowlen+columnlen;
    if(temp_d<distance) distance=temp_d;
    }
    else if (gender=='W') {
    rowlen=abs(floor-3);
    columnlen=abs(line-0);
    temp_d=rowlen+columnlen;
    if(temp_d<distance) distance=temp_d;
    rowlen=abs(floor-1);
    columnlen=abs(line-0);
    temp_d=rowlen+columnlen;
    if(temp_d<distance) distance=temp_d;
    rowlen=abs(floor-2);
    columnlen=abs(line-6);
    temp_d=rowlen+columnlen;
    if(temp_d<distance) distance=temp_d;
    rowlen=abs(floor-4);
    columnlen=abs(line-6);
    temp_d=rowlen+columnlen;
    if(temp_d<distance) distance=temp_d;
    }
    return distance;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_L2char
T2_D2_P2_L2int_T2_F2_D2_L2int
T2_F2_D2_L2char_T2_D2_L2int_T
_D2_L2int_T2_D2_L2int_T2_D2_D
s_E_F3_E_F3_A_D1s_E_F3_D1i_R_
_F1_L2int_T2_D2_L2int_T2_D2_L
char_T2_D2_P2_L2int_T2_F2_D2_
2int_T2_D2_L2int_T2_D2_L2int_
2_D1i_D2_L2int_T2_D1i_D2_D1c_
==_D1i_B-_E_F3_A_D1i_B-_E_F3_
_B+_A_B<_A_L1_D1i_B-_E_F3_A_D
i_B-_E_F3_A_B+_A_B<_A_L1_D1i_
-_E_F3_A_D1i_B-_E_F3_A_B+_A_B
_A_L1_D1i_B-_E_F3_A_D1i_B-_E_
3_A_B+_A_B<_A_L1_C_D1c_B==_D1
_B-_E_F3_A_D1i_B-_E_F3_A_B+_A
B<_A_L1_D1i_B-_E_F3_A_D1i_B-_
_F3_A_B+_A_B<_A_L1_D1i_B-_E_F
_A_D1i_B-_E_F3_A_B+_A_B<_A_L1
D1i_B-_E_F3_A_D1i_B-_E_F3_A_B
_A_B<_A_L1_C_L1_L1_R_C_F1_1_
###############################*/
//$//
