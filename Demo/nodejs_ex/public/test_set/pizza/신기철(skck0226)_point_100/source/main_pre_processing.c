//신기철(skck0226)_point_100
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50
int gcd(int a, int b){
    int i;
    if(a>b){
        for(i=b;i>1;i--){
            if(a%i==0&&b%i==0) return 1;
        }
        return 0;
    }
    else{
        for(i=a;i>1;i--){
            if(a%i==0&&b%i==0) return 1;
        }
        return 0;
    }
}
int main()
{
	int piece_num;
	int input[PIECE_NUM_MAX],put[50];
	int i,j;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input[i]);
    int k=piece_num/2;
	////////////////////////////////////////
    for(i=0;i<piece_num;i++){
        int p=1;
        for(j=0;j<piece_num;j++){
            put[j]=input[j];
        }
        put[i]=0;
        for(j=i;j<piece_num-1;j++){
            put[j]=put[j+1];
        }
        for(j=0;j<k;j++){
            if(gcd(put[j],put[j+k])== 0){
                p=0;
                break;
            }
        }
        
        if(p==1){
            printf("%d\n",input[i]);
            break;
        }
    }

	////////////////////////////////////////


	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_D2_B>_A_D
i_B>_B%_D1i_B==_B%_D1i_B==_B&
_D1i_R_L1_C_FOR_D1i_R_C_A_D1i
B>_B%_D1i_B==_B%_D1i_B==_B&&_
1i_R_L1_C_FOR_D1i_R_C_L1_C_F1
L2int_T2_F2_D2_L2int_T2_D2_L2
nt_T2_D1i_D2_L2int_T2_D1i_D2_
2int_T2_D2_L2int_T2_D2_L2int_
2_D2_D1s_E_F3_D1i_A_B<_D1s_E_
3_FOR_L2int_T2_D1i_B/_D2_D1i_
_B<_L2int_T2_D1i_D2_D1i_A_B<_
_C_FOR_D1i_A_A_D1i_B-_B<_D1i_
+_A_C_FOR_D1i_A_B<_B+_E_F3_D1
_B==_D1i_A_C_L1_C_FOR_D1i_B==
D1s_E_F3_C_L1_C_FOR_D1i_R_C_F
_1_
###############################*/
//$//
