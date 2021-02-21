//김승환(asdf7845120)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    int BFS[1000][3]={0};
    int MAP[6][7]={0};
    int XM[4] = {1,-1,0,0};
    int YM[4] = {0,0,1,-1};
    int S,NS,i,F;
    //  W == 1 , M == 2 
    MAP[1][0] = MAP[2][6] = MAP[3][0] = MAP[4][6] = 1;
    MAP[1][6] = MAP[2][0] = MAP[3][6] = MAP[4][0] = 2;
    S = NS = 0;
    if(gender == 'W')
        F=1;
    else
        F=2;
    BFS[NS][0] = f;
    BFS[NS][1] = l;
    BFS[NS][2] = 0;
    MAP[f][l] = 3;
    NS++;
    while(S<NS)
    {
        f= BFS[S][0];
        l= BFS[S][1];
        
        if(MAP[f][l] == F)
        {
            out = BFS[S][2];
            break;
        }
        MAP[f][l]=3;
        for(i=0;i<4;i++)
        {
            if(0<f+YM[i] && f+YM[i] <6 && 0<=l+XM[i] && l+XM[i] < 7 && MAP[f+YM[i]][l+XM[i]] != 3)
            {
                BFS[NS][0] = f+YM[i];
                BFS[NS][1] = l+XM[i];
                BFS[NS][2] = BFS[S][2]+1;
                
                NS++;
            }
        }
        S++;
    }
	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_L2int_T2_D1i_D1i_
1i_D2_L2int_T2_D1i_D1i_D1i_D2
L2int_T2_D1i_D1i_D1i_D1i_D1i_
2_L2int_T2_D1i_D1i_D1i_D1i_D1
_D2_L2int_T2_D2_L2int_T2_D2_L
int_T2_D2_L2int_T2_D2_D1i_D1i
D1i_D1i_D1i_D1i_D1i_D1i_D1i_A
A_A_A_D1i_D1i_D1i_D1i_D1i_D1i
D1i_D1i_D1i_A_A_A_A_D1i_A_A_D
c_B==_D1i_A_D1i_A_L1_D1i_A_D1
_A_D1i_D1i_A_D1i_A_B<_D1i_A_D
i_A_B==_D1i_A_C_L1_D1i_A_D1i_
_D1i_B<_D1i_B+_B<_B+_D1i_B<_B
&_D1i_B+_B<=_B&&_B+_D1i_B<_B&
_B+_B+_D1i_B!=_B&&_D1i_B+_A_D
i_B+_A_D1i_D1i_D1i_B+_A_C_L1_
_FOR_C_W_D1s_E_F3_D1i_R_C_F1_
_
###############################*/
//$//
