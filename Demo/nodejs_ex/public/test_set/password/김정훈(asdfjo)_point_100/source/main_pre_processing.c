//김정훈(asdfjo)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int fibo(int fibn);

int main()
{
	int fibo_n;
    int fibor;
	char text[TEXT_MAX] = { 0 } ;
    int i;
    i = 0;

	scanf("%d", &fibo_n);
    fibor = fibo(fibo_n);

	scanf("%s", text);
    for(i = 0; i < TEXT_MAX ; i ++)
    {
        if(text[i] == '\0')
        break;
        
        if(((int)text[i]+ fibor%26) >90)
        text[i] = text[i] -( 26- fibor %26);
       else if (text[i] <= 90)
        text[i] = text[i] + fibor %26;
    }

	////////////////////////////////////////



	////////////////////////////////////////

	printf("%s\n",text);
	return 0;
}

int fibo(int fibn)
{
    if (fibn == 0)
    return 0;

    else if(fibn== 1)  
    return 1;

    else
    return fibo(fibn - 1) + fibo(fibn - 2);
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2char_T2_D1i_D1i_D2_
2int_T2_D2_D1i_A_D1s_E_F3_E_F
_A_D1s_E_F3_D1i_A_D1i_B<_D1c_
==_L1_L2int_T2_D1i_B%_B+_D1i_
>_D1i_D1i_B%_B-_B-_A_D1i_B<=_
1i_B%_B+_A_L1_L1_C_FOR_D1s_E_
3_D1i_R_C_F1_L2int_T2_D2_P2_L
int_T2_F2_D2_D1i_B==_D1i_R_D1
_B==_D1i_R_D1i_B-_E_F3_D1i_B-
E_F3_B+_R_L1_L1_C_F1_1_
###############################*/
//$//
