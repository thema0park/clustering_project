//김우진(dnwls813)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
long long fibo(int num)
{
    int i=0;
    long long num1=1,num2=1,num3=0;
    if(num==1)
    {
        return num1;
    }
    else if(num==2)
    {
        return num2;
    }
    else if(num>2)
    {
        for(i=2;i<num;i++)
        {
            num3=num1+num2;
            num1=num2;
            num2=num3;
        }
        return num3;
    }
}

int main(void)
{
    int i=0,len=0,num=0;
    long long fibo_num=0;
    char str[100]={0};
    scanf("%d",&num);
    scanf("%s",str);
    fibo_num=fibo(num);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        str[i]+=(fibo_num%26);
        if(str[i]>'Z')
        {
         str[i]-=26;
        }
    }
    printf("%s\n",str);
    return 0;
}/*########code signature#########
2int_T2_D2_P2_L2long_T2_F2_D2
L2int_T2_D1i_D2_L2long_T2_D1i
D2_L2long_T2_D1i_D2_L2long_T2
D1i_D2_D1i_B==_R_C_D1i_B==_R_
_D1i_B>_D1i_A_B<_B+_A_A_A_C_F
R_R_C_L1_L1_L1_C_F1_L2void_T2
P2_L2int_T2_F2_D2_L2int_T2_D1
_D2_L2int_T2_D1i_D2_L2int_T2_
1i_D2_L2long_T2_D1i_D2_L2char
T2_D1i_D1i_D2_D1s_E_F3_D1s_E_
3_E_F3_A_E_F3_A_D1i_A_B<_D1i_
%_A_D1c_B>_D1i_A_C_L1_C_FOR_D
s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
