//문지영(koo0524)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

int mab[8]={0};

for(l=0; l<3; l++) {
    mab[0] += mabangjin[0][l];
}
for(l=0; l<3; l++) {
    mab[1] += mabangjin[1][l];
}
if(mab[0]!=mab[1]) {answer = 'X'; goto END;}
else{
for(l=0; l<3; l++) {
    mab[2] += mabangjin[2][l];
}
if(mab[0]!=mab[2]) {answer = 'X'; goto END;}
else{
for(l=0; l<3; l++) {
    mab[3] += mabangjin[l][0];
}
if(mab[0]!=mab[3]) {answer = 'X'; goto END;}
else{
for(l=0; l<3; l++) {
    mab[4] += mabangjin[l][1];
}
if(mab[0]!=mab[4]) {answer = 'X'; goto END;}
else{
for(l=0; l<3; l++) {
    mab[5] += mabangjin[l][2];
}
if(mab[0]!=mab[5]) {answer = 'X'; goto END;}
else{
for(l=0; l<3; l++) {
    mab[6] += mabangjin[l][l];
}
if(mab[0]!=mab[6]) {answer = 'X'; goto END;}
else{
for(l=0; l<3; l++) {
    mab[7] += mabangjin[l][2-l];
}
if(mab[0]!=mab[7]) {answer = 'X'; goto END;}
else answer='O';
}
}
}
}
}
}
END:	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_L2i
t_T2_D1i_D1i_D2_D1i_A_D1i_B<_
1i_D1i_A_C_FOR_D1i_A_D1i_B<_D
i_D1i_A_C_FOR_D1i_D1i_B!=_D1c
A_C_D1i_A_D1i_B<_D1i_D1i_A_C_
OR_D1i_D1i_B!=_D1c_A_C_D1i_A_
1i_B<_D1i_D1i_A_C_FOR_D1i_D1i
B!=_D1c_A_C_D1i_A_D1i_B<_D1i_
1i_A_C_FOR_D1i_D1i_B!=_D1c_A_
_D1i_A_D1i_B<_D1i_D1i_A_C_FOR
D1i_D1i_B!=_D1c_A_C_D1i_A_D1i
B<_D1i_A_C_FOR_D1i_D1i_B!=_D1
_A_C_D1i_A_D1i_B<_D1i_D1i_B-_
_C_FOR_D1i_D1i_B!=_D1c_A_C_D1
_A_L1_C_L1_C_L1_C_L1_C_L1_C_L
_C_L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
