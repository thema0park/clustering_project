//강선규(gron1gh1)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100
int mem[1001];
int f(int n)
{
    if(mem[n])
        return mem[n];
    if(n <= 2)
        return 1;
    else return (mem[n] = (f(n-2) + f(n -1))  % 26);
}


int main()
{
	int fibo_n;
	char text[TEXT_MAX],temp;
    int fibo_res,i,j,k;
	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    fibo_res = f(fibo_n);
    for(i = 0;text[i]!='\0';i++)
    {
         if(text[i] >= 'A' && text[i] <= 'Z')
         {
             text[i]+= fibo_res;
             if(text[i] > 'Z')
                text[i] -= 26;
         }
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D1i_D2_L2int_T2_D2_P2
L2int_T2_F2_D2_R_L1_D1i_B<=_D
i_R_D1i_B-_E_F3_D1i_B-_E_F3_B
_D1i_B%_A_R_L1_C_F1_L2int_T2_
2_D2_L2int_T2_D2_L2char_T2_D1
_D2_L2char_T2_D2_L2int_T2_D2_
2int_T2_D2_L2int_T2_D2_L2int_
2_D2_D1s_E_F3_D1s_E_F3_E_F3_A
D1i_A_D1c_B!=_D1c_B>=_D1c_B<=
B&&_A_D1c_B>_D1i_A_L1_C_L1_C_
OR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
