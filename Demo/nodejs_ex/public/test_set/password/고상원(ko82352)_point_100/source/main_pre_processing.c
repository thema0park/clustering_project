//고상원(ko82352)_point_100
#define _CRT_SECURE_NO_WARNINGS
  #define TEXT_MAX 100

int main()
{
    int i,j;
	int fibo_n;
    int fibo[31]={0},len;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);
	////////////////////////////////////////
    len=strlen(text);
    fibo[0]=1;
    fibo[1]=1;
    for(i=2;i<30;i++)
        fibo[i]=fibo[i-2]+fibo[i-1];
    for(i=0;i<len;i++){
        if(text[i]+fibo[fibo_n-1]>'Z'){
            for(j=0;j<fibo[fibo_n-1];j++){
                if(text[i]+1>'Z')
                text[i]='A'-1;
                text[i]++;
            }
        }
        else
        text[i]+=fibo[fibo_n-1];
    }
	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
1i_D1i_D2_L2int_T2_D2_L2char_
2_D1i_D2_D1s_E_F3_D1s_E_F3_E_
3_A_D1i_D1i_A_D1i_D1i_A_D1i_A
D1i_B<_D1i_B-_D1i_B-_B+_A_FOR
D1i_A_B<_D1i_B-_B+_D1c_B>_D1i
A_D1i_B-_B<_D1i_B+_D1c_B>_D1c
D1i_B-_A_L1_C_FOR_C_D1i_B-_A_
1_C_FOR_D1s_E_F3_D1i_R_C_F1_1

###############################*/
//$//
