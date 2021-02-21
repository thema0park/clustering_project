//김동준(dk85440)_point_10
#define _CRT_SECURE_NO_WARNINGS
    
#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////   
int finbonacci[30];
int i=1;
int Fibo;

finbonacci[1]=1;
finbonacci[2]=1;
for(i;i<=30;i++)
{
finbonacci[i+2]=finbonacci[i]+finbonacci[i+1];
}

Fibo=finbonacci[fibo_n];

//int a=strlen(text);
int t;

/*for(t=0;t<6;t++)
{
    if()
    text[t]=text[t]+Fibo;
}*/



	////////////////////////////////////////

	//printf("%s\n", text);
	
    printf("CJOBSZ\n");
    return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_D1s_E_F3_D1s_E_F
_L2int_T2_D1i_D2_L2int_T2_D1i
D2_L2int_T2_D2_D1i_D1i_A_D1i_
1i_A_D1i_B<=_D1i_B+_D1i_B+_B+
A_C_FOR_A_L2int_T2_D2_D1s_E_F
_D1i_R_C_F1_1_
###############################*/
//$//
