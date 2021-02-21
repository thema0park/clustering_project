//강동희(pinkbanana3)_point_20
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int g(int a,int b){
    int tmp; int i; int c=0;
    if(b>a){
        tmp =a;
        a=b;
        b=tmp;
    }
    for(i=b;i>0;i--){
        if(a%b==0){
            c=i;
            break;
        }
    }
    return c;
}

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
    int input[PIECE_NUM_MAX];
	int i,j,c;
	int output=0; int br=0;
	scanf("%d", &piece_num);
    c=piece_num/2;
	for (i = 0; i < piece_num; i++) scanf("%d", &input_data[i]);
	////////////////////////////////////////
    for(i=0;i<piece_num;i++){
        int a=0;
        for(j=0;j<piece_num;j++){
          if(j!=i) {
              input[a]=input_data[j];
              a++;
          }
        }
        for(j=0;j<c;j++){
            if(g(input[j],input[j+c])<=1) {br=-1; break;}
            else br=0;
        }
        if(br==0){
            output=input_data[i];
            break;
        }
    }


	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_D2_L2int_
2_D2_L2int_T2_D1i_D2_B>_A_A_A
C_L1_A_D1i_B>_B%_D1i_B==_A_C_
1_C_FOR_R_C_F1_L2int_T2_F2_D2
L2int_T2_D2_L2int_T2_D1i_D2_L
int_T2_D1i_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
1i_D2_L2int_T2_D1i_D2_D1s_E_F
_D1i_B/_A_D1i_A_B<_D1s_E_F3_F
R_D1i_A_B<_L2int_T2_D1i_D2_D1
_A_B<_B!=_A_C_L1_C_FOR_D1i_A_
<_B+_E_F3_D1i_B<=_D1i_A_C_D1i
A_L1_C_FOR_D1i_B==_A_C_L1_C_F
R_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
