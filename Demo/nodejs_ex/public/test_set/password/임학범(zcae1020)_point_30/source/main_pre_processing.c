//임학범(zcae1020)_point_30
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int fibo(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);
	////////////////////////////////////////
    int fibon=fibo(fibo_n);
    int i=0;
    int len=0;
    while(1)
    {
        if(text[i]=='\0')
        {
            break;
        }
        len++;
        i++;
    }
    for(i=0;i<len;i++)
    {
        if(text[i]+fibon>'Z')
        {
            text[i]=text[i]+fibon-'Z'+'A'-1;
            continue;
        }
        text[i]=text[i]+fibon;
    }



	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_B==_B||_D1i_R_C_L1
D1i_B-_E_F3_D1i_B-_E_F3_B+_R_
_F1_L2int_T2_F2_D2_L2int_T2_D
_L2char_T2_D1i_D2_D1s_E_F3_D1
_E_F3_L2int_T2_E_F3_D2_L2int_
2_D1i_D2_L2int_T2_D1i_D2_D1i_
1c_B==_C_L1_C_W_D1i_A_B<_B+_D
c_B>_B+_D1c_B-_D1c_B+_D1i_B-_
_C_L1_B+_A_C_FOR_D1s_E_F3_D1i
R_C_F1_1_
###############################*/
//$//
