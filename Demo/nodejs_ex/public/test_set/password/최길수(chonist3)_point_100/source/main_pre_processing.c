//최길수(chonist3)_point_100
#define _CRT_SECURE_NO_WARNINGS
  #define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    //피보나치수 구하기
    int p2=0,p1=1;
    int fibo,i=0;
    if(fibo_n==1)
    {
        fibo=1;
    }
    else
    {
        for(i=0;i<fibo_n-1;i++)
        {
            fibo=p2+p1;
            p2=p1;
            p1=fibo;
        }
    }
    //////////////////////////////////////////////
    int len;
    i=0;
    while(1)
    {
        if(text[i]=='\0')
        {
            len=i;
            break;
        }
        else if(text[i]>='A' && text[i]<='Z')
        {
            if(text[i] + (fibo%26)>90)
                text[i] = text[i] + (fibo%26)-26;
            else
                text[i] = text[i] + (fibo%26);
        }
        else 
            continue;
        i++;
    }
   // printf("%d %d\n",fibo,fibo%26);
    printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_D1s_E_F3_D1s_E_F
_L2int_T2_D1i_D2_L2int_T2_D1i
D2_L2int_T2_D2_L2int_T2_D1i_D
_D1i_B==_D1i_A_C_D1i_A_D1i_B-
B<_B+_A_A_A_C_FOR_C_L1_L2int_
2_D2_D1i_A_D1i_D1c_B==_A_C_D1
_B>=_D1c_B<=_B&&_D1i_B%_B+_D1
_B>_D1i_B%_B+_D1i_B-_A_D1i_B%
B+_A_L1_C_L1_L1_C_W_D1s_E_F3_
1i_R_C_F1_1_
###############################*/
//$//
