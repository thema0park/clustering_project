//진선재(disto7142)_point_40
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int gcd(int a,int b){
    int c;
    while(1){
        c=abs(a-b);
        a=b;
        b=c;
        if(c==0) return a;
    }
    return 0;
}
int prime(int x){
    int i;
    if(x==2) return 1;
    if(x==1 || x%2==0) return 0;
    for(i=3;i*i<=x;i+=2){
        if(x%i==0) return 0;
    }
    return 1;
}
int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    int check[101]={0};
    int j;
    for(i=0;i<piece_num;i++){
        for(j=i+1;j<piece_num;j++){
            if(input_data[i]%input_data[j]==0 || input_data[j]%input_data[i]==0){
                check[input_data[i]]=1;
                check[input_data[j]]=1;
            }
            if(gcd(input_data[i],input_data[j])>1){
                check[input_data[i]]=1;
                check[input_data[j]]=1;
            }
        }
    }

    for(i=0;i<piece_num;i++){
        if(check[input_data[i]]==0){
            output=input_data[i];
            break;
        }
    }
	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_D2_D1i_B-
E_F3_A_A_A_D1i_B==_R_L1_C_W_D
i_R_C_F1_L2int_T2_D2_P2_L2int
T2_F2_D2_L2int_T2_D2_D1i_B==_
1i_R_L1_D1i_B==_D1i_B%_D1i_B=
_B||_D1i_R_L1_D1i_A_B*_B<=_D1
_A_B%_D1i_B==_D1i_R_L1_C_FOR_
1i_R_C_F1_L2int_T2_F2_D2_L2in
_T2_D2_L2int_T2_D1i_D2_L2int_
2_D2_L2int_T2_D2_D1s_E_F3_D1i
A_B<_D1s_E_F3_FOR_L2int_T2_D1
_D1i_D2_L2int_T2_D2_D1i_A_B<_
1i_B+_A_B<_B%_D1i_B==_B%_D1i_
==_B||_D1i_A_D1i_A_C_L1_E_F3_
1i_B>_D1i_A_D1i_A_C_L1_C_FOR_
_FOR_D1i_A_B<_D1i_B==_A_C_L1_
_FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
