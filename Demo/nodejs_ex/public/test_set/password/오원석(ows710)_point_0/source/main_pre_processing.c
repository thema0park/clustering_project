//오원석(ows710)_point_0
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int main()
{
	int fibo_n,fibo1=1,fibo2=1,ans,i;
	char text[TEXT_MAX];

    scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    for(i=2;i<fibo_n;i++)
    {
        ans=fibo1+fibo2;
        fibo1=fibo2;
        fibo2=ans;
    }
    for(i=0;i<100;i++)
    {
        if((fibo_n==1)||(fibo_n==2))
        {
            if(text[i]+1=='Z')
            {
                text[i]='A';
            }
            else
            {
               text[i]=text[i]+1;
            }
        }
        else
        {
            if(text[i]+ans>'Z')
            {
                text[i]=text[i]+ans-26;
            }
            else
            {
                text[i]=text[i]+ans;
            }
        }
        if(text[i]==NULL)
        {
            break;
        }
    }
    printf("%s\n",text);
	////////////////////////////////////////
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_L2int_T2_D1i_D2_L
int_T2_D2_L2int_T2_D2_L2char_
2_D1i_D2_D1s_E_F3_D1s_E_F3_D1
_A_B<_B+_A_A_A_C_FOR_D1i_A_D1
_B<_D1i_B==_D1i_B==_B||_D1i_B
_D1c_B==_D1c_A_C_D1i_B+_A_C_L
_C_B+_D1c_B>_B+_D1i_B-_A_C_B+
A_C_L1_C_L1_B==_C_L1_C_FOR_D1
_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
