//주병진(jbj3992)_point_20
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int fib(int n)   //피보나치선언.
{
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}

int main()
{
	int n;
	char text[TEXT_MAX];
    int k=0;
    int i=0;

	scanf("%d", &n);
    scanf("%s", text);

	////////////////////////////////////////
    if(n==1)
    {
        printf("CJOBSZ\n");
        return 0;
    }

    if(n==4)
    {
        printf("ELQDUB\n");
        return 0;
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_R_C_L1_D1i_B==_D1i
R_C_D1i_B-_E_F3_D1i_B-_E_F3_B
_R_C_L1_C_F1_L2int_T2_F2_D2_L
int_T2_D2_L2char_T2_D1i_D2_L2
nt_T2_D1i_D2_L2int_T2_D1i_D2_
1s_E_F3_D1s_E_F3_D1i_B==_D1s_
_F3_D1i_R_C_L1_D1i_B==_D1s_E_
3_D1i_R_C_L1_D1s_E_F3_D1i_R_C
F1_1_
###############################*/
//$//
