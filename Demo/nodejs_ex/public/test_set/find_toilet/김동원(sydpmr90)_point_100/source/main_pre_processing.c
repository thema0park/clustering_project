//김동원(sydpmr90)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MAN 10
#define WOMAN 20

#define LEFT 100
#define RIGHT 200

int arr[7][7]={
    {0,0,0,0,0,0,0},
    {WOMAN,0,0,0,0,0,MAN},
    {MAN,0,0,0,0,0,WOMAN},
    {WOMAN,0,0,0,0,0,MAN},
    {MAN,0,0,0,0,0,WOMAN},
    {0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0}
};

//찾으면 횟수, 못찾으면 -1
int checkFloor(int height, int sex, int nowPos, int leftOrRight){
    int count = 0;
    int i;
    
    if(leftOrRight == LEFT){
        for(i=nowPos;i>0;--i){
            ++count;
        }
        if(sex == arr[height][0]){
            return count;
        }
        else{
            return -20;
        }
    }
    else{
        for(i=nowPos;i<6;++i){
            ++count;
        }
        if(sex == arr[height][6]){
            return count;
        }
        else{
            return -20;
        }

    }

    return -20;
}

int min(int a,int b){
    if(a <= -1){return b;}
    if(b <= -1){return a;}
    if(a>b){
        return b;
    }
    return a;
}

int main()
{
	char gender;
	int f, l;
	int answer;
    int t1,t2;

    int BATH;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(gender == 'M'){BATH = MAN;}
    else{BATH = WOMAN;}
//int checkFloor(int height, int sex, int nowPos, int leftOrRight){
    t1 = checkFloor(f,BATH,l,LEFT);
    t2 = checkFloor(f,BATH,l,RIGHT);

    answer = min(t1,t2);

    if(f == 5){
        answer = min(answer, checkFloor(f-2,BATH,l,LEFT)+2);
        answer = min(answer, checkFloor(f-2,BATH,l,RIGHT)+2);
    }

    answer = min(answer, checkFloor(f-1,BATH,l,LEFT)+1);
    answer = min(answer, checkFloor(f-1,BATH,l,RIGHT)+1);
    answer = min(answer, checkFloor(f+1,BATH,l,LEFT)+1);
    answer = min(answer, checkFloor(f+1,BATH,l,RIGHT)+1);



	////////////////////////////////////////

	printf("%d\n", answer);
	return 0;
}/*########code signature#########
2int_T2_D1i_D1i_D1i_D1i_D1i_D
i_D1i_D1i_D1i_D1i_D1i_D1i_D1i
D1i_D1i_D1i_D1i_D1i_D1i_D1i_D
i_D1i_D1i_D1i_D1i_D1i_D1i_D1i
D1i_D1i_D1i_D1i_D1i_D1i_D1i_D
i_D1i_D1i_D1i_D1i_D1i_D1i_D1i
D1i_D1i_D1i_D1i_D1i_D1i_D1i_D
i_D2_L2int_T2_D2_L2int_T2_D2_
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_D1i_D2_L2
nt_T2_D2_D1i_B==_A_D1i_B>_C_F
R_D1i_B==_R_C_D1i_R_C_L1_C_A_
1i_B<_C_FOR_D1i_B==_R_C_D1i_R
C_L1_C_L1_D1i_R_C_F1_L2int_T2
D2_L2int_T2_D2_P2_L2int_T2_F2
D2_D1i_B<=_R_C_L1_D1i_B<=_R_C
L1_B>_R_C_L1_R_C_F1_L2int_T2_
2_D2_L2char_T2_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D2_L2int
T2_D2_L2int_T2_D2_L2int_T2_D2
D1s_E_F3_D1c_B==_D1i_A_C_D1i_
_C_L1_D1i_E_F3_A_D1i_E_F3_A_E
F3_A_D1i_B==_D1i_B-_D1i_E_F3_
1i_B+_E_F3_A_D1i_B-_D1i_E_F3_
1i_B+_E_F3_A_C_L1_D1i_B-_D1i_
_F3_D1i_B+_E_F3_A_D1i_B-_D1i_
_F3_D1i_B+_E_F3_A_D1i_B+_D1i_
_F3_D1i_B+_E_F3_A_D1i_B+_D1i_
_F3_D1i_B+_E_F3_A_D1s_E_F3_D1
_R_C_F1_1_
###############################*/
//$//
