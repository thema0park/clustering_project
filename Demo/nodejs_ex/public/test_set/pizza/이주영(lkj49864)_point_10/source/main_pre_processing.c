//이주영(lkj49864)_point_10
#define _CRT_SECURE_NO_WARNINGS
 #define PIECE_NUM_MAX 50
int GCD(int a, int b);
int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i, j, a=0;
	int output;
    int n1, n2;
	scanf("%d", &piece_num);
	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);
    for(i=0; i < piece_num; i++){
        for(j=0; j<piece_num; j++){
            n1=j+i;
            n2=j+i+(piece_num/2);
            if(n1>(piece_num-1)){
                n1 -=piece_num;
            }
            if(n2>(piece_num-1)){
                n2 -=piece_num;
            }
            if(GCD(input_data[n1], input_data[n2])==1){
                a +=1;
                break;
            }
        }
        if(a==1){
            output=input_data[i];
            break;
        }
    }
	printf("%d\n", output);
	return 0;
}
int GCD(int a, int b){
    if(a<=b){
        return a;
    }
    else if(b==0){
        return a;
    }
    else{
        return GCD(b, a%b);
    }
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_F2_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D2_L2int_T2_D2_L2int_T2_D1
_D2_L2int_T2_D2_L2int_T2_D2_L
int_T2_D2_D1s_E_F3_D1i_A_B<_D
s_E_F3_FOR_D1i_A_B<_D1i_A_B<_
+_A_B+_D1i_B/_B+_A_D1i_B-_B>_
_C_L1_D1i_B-_B>_A_C_L1_E_F3_D
i_B==_D1i_A_C_L1_C_FOR_D1i_B=
_A_C_L1_C_FOR_D1s_E_F3_D1i_R_
_F1_L2int_T2_D2_L2int_T2_D2_P
_L2int_T2_F2_D2_B<=_R_C_D1i_B
=_R_C_B%_E_F3_R_C_L1_L1_C_F1_
_
###############################*/
//$//
