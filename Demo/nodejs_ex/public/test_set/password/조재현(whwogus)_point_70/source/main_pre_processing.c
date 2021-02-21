//조재현(whwogus)_point_70
#define _CRT_SECURE_NO_WARNINGS
  #define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX] = { 0 }; //최대 99글자 A는 65 Z는 90
    int fn[32] = { 0 }; 
    int i,j,k; int count = 0;
	scanf("%d", &fibo_n);
    if (fibo_n>30 || fibo_n <1) printf("error\n");
	scanf("%s", text);

    

	////////////////////////////////////////
    //피보나치 만들기
    fn[1] = 1; fn[2] = 1;
    for (i=3;i<32;i++)
    {
        fn[i] = fn[i-1] + fn[i-2];
    }

    for (i=0;i<100;i++)
    {
        if (text[i] == 0) break;
        text[i] = text[i] + fn[fibo_n];
        count += 1;
        
    }
    for (i=0;i<100;i++)
    {
        while(1){
            if (text[i]>=65 && text[i]<=90) break;
            text[i] = text[i] - 26;
        }
    }
    /*
    for (i=0;i<100;i++)
    {
        if (strlen(text)<i)
        {
            text[i] = NULL;
        }
    }
    */



	////////////////////////////////////////
    for (i=0;i<count;i++)
    {
        printf("%c", text[i]);
    }
    printf("\n");
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D1i_D2_L2int_T2_D1i
D1i_D2_L2int_T2_D2_L2int_T2_D
_L2int_T2_D2_L2int_T2_D1i_D2_
1s_E_F3_D1i_B>_D1i_B<_B||_D1s
E_F3_L1_D1s_E_F3_D1i_D1i_A_D1
_D1i_A_D1i_A_D1i_B<_D1i_B-_D1
_B-_B+_A_C_FOR_D1i_A_D1i_B<_D
i_B==_L1_B+_A_D1i_A_C_FOR_D1i
A_D1i_B<_D1i_D1i_B>=_D1i_B<=_
&&_L1_D1i_B-_A_C_W_C_FOR_D1i_
_B<_D1s_E_F3_C_FOR_D1s_E_F3_D
i_R_C_F1_1_
###############################*/
//$//
