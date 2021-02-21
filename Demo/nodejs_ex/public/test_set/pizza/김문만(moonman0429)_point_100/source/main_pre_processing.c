//김문만(moonman0429)_point_100
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50
int gcd(int a, int b){
    int c = b;
    int k = 1;
    while(c){
        if(!(a%c) && !(b%c)){
            a /= c;
            b /= c;
            k *= c;
        }
        c--;
    }
    return k;
}

int main()
{
	int piece_num;
	int a[PIECE_NUM_MAX];
    int b[PIECE_NUM_MAX];
	int i;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &a[i]);

	////////////////////////////////////////
    int k;
    for(k = 0; k<piece_num; k++){
        int l, cnt = 0;
        for(l = 0; l<piece_num; l++){
            if(l!=k) b[cnt++] = a[l];
        }

        int cnt2 = 0;
        int j;
        for(j = 0; j<cnt/2; j++){
            int max, min;
            if(b[j] > b[j+cnt/2]){
                max = b[j];
                min = b[j+cnt/2];
            }
            else{
                max = b[j+cnt/2];
                min = b[j];
            }
            if(gcd(max, min) != 1){
                cnt2++;
            }
        }
        if(cnt2 == (cnt/2)){
            printf("%d\n", a[k]);
            return 0;
        }
    }
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_D2_L2int_
2_D1i_D2_B%_B%_B&&_A_A_A_C_L1
C_W_R_C_F1_L2int_T2_F2_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D2_L2int_T2_D2_L2int_T
_D2_D1s_E_F3_D1i_A_B<_D1s_E_F
_FOR_L2int_T2_D2_D1i_A_B<_L2i
t_T2_D2_L2int_T2_D1i_D2_D1i_A
B<_B!=_A_L1_C_FOR_L2int_T2_D1
_D2_L2int_T2_D2_D1i_A_D1i_B/_
<_L2int_T2_D2_L2int_T2_D2_D1i
B/_B+_B>_A_D1i_B/_B+_A_C_D1i_
/_B+_A_A_C_L1_E_F3_D1i_B!=_C_
1_C_FOR_D1i_B/_B==_D1s_E_F3_D
i_R_C_L1_C_FOR_C_F1_1_
###############################*/
//$//
