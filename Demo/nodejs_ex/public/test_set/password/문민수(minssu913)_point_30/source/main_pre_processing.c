//문민수(minssu913)_point_30
#define _CRT_SECURE_NO_WARNINGS
  /*#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////



	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}*/

//피보나치 함수
int fibo(int N)
{
    if(N==0)
    return 0;

    else if(N==1)
    return 1;

    else
    return fibo(N-1)+fibo(N-2);
}

int main()
{
    int i;
    char text[100];
    int fibo_n;

    scanf("%d", &fibo_n);
	scanf("%s", text);

    for(i=0; i<strlen(text); i++)
    {
        text[i]+=fibo(fibo_n);
        if(text[i]>'Z')
            text[i]-= 26;
    }

    printf("%s\n", text);




    return 0;
}

/*int main()
{

    int fibo_n, an;
    scanf("%d",&fibo_n);

    an=fibo(fibo_n);

    printf("%d", an);
}*//*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_R_D1i_B==_D1i_R_D1
_B-_E_F3_D1i_B-_E_F3_B+_R_L1_
1_C_F1_L2int_T2_F2_D2_L2int_T
_D2_L2char_T2_D1i_D2_L2int_T2
D2_D1s_E_F3_D1s_E_F3_D1i_A_E_
3_B<_E_F3_A_D1c_B>_D1i_A_L1_C
FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
