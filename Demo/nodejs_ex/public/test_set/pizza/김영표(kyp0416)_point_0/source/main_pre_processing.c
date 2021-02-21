//김영표(kyp0416)_point_0
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int gcd(int a, int b){
    int i,j,n = 1,tmp,cnt = 0;
    if(a<b){
        tmp = a;
        a = b;
        b = tmp;
    }
    for(i = 1;i<=b;i++){
        if(a%i == 0 && b%i ==0){
            cnt++;
            n = i;
        }
    }
    if(cnt == 0){return 1;}
    else return n;
}
int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i,j;
    int cnt[PIECE_NUM_MAX]= {0,};
	int output;

	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);
    
	////////////////////////////////////////

    for(i = 0;i<piece_num;i++){
        for(j = 0;j<piece_num;j++){
            if(!(gcd(input_data[i],input_data[j]) == 1) && i != j){
                cnt[i]++;
                cnt[j]++;
            }
        }
    }
    j = 0;
    for(i = 0;i<piece_num;i++){
        if(j<cnt[i]){
            j = cnt[i];
            output = input_data[i];
        }
    }
    
	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_D2_L2int_
2_D2_L2int_T2_D1i_D2_L2int_T2
D2_L2int_T2_D1i_D2_B<_A_A_A_C
L1_D1i_A_B<=_B%_D1i_B==_B%_D1
_B==_B&&_A_C_L1_C_FOR_D1i_B==
D1i_R_C_R_L1_C_F1_L2int_T2_F2
D2_L2int_T2_D2_L2int_T2_D1i_D
_L2int_T2_D2_L2int_T2_D2_L2in
_T2_D1i_D1i_D2_L2int_T2_D2_D1
_E_F3_D1i_A_B<_D1s_E_F3_FOR_D
i_A_B<_D1i_A_B<_E_F3_D1i_B==_
!=_B&&_C_L1_C_FOR_C_FOR_D1i_A
D1i_A_B<_B<_A_A_C_L1_C_FOR_D1
_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
