//장은학(showri0108)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int fibo_n(int n)
{

        int first = 1;
        int second = 1;
        int i,temp;
        if(n == 1 || n == 2)
            return 1;
        else if(n >= 3)
        {
            for(i = 2; i <= n; i++)
            {
                temp = first;
                first = first + second;
                second = temp;
            }
        return temp;
        }
        
        //if(n == 1 || n == 2)
        //  return 1;
        //else
        //   return fibo_n(n-1) + fibo_n(n-2);
}

int main()
{
	char text[TEXT_MAX];
    int k;
    int n;
    int i; 

	scanf("%d", &n);
	scanf("%s", text);

	k = fibo_n(n);

    for(i = 0; i < 100; i++)
    {  
        if(k > 25)
           k = k%26;
        if('A'<= text[i] && 'Z' >= text[i])
        {
            text[i] = text[i] + k;
            //if(k > 25)
            //k -= 26;
            if('Z' < text[i]) 
                text[i] -= 26;
        }
    }
// 52 더하면 제자리

    //printf("%d\n", k); // 피보나치 수
	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
2int_T2_D1i_D2_L2int_T2_D1i_D
_L2int_T2_D2_L2int_T2_D2_D1i_
==_D1i_B==_B||_D1i_R_D1i_B>=_
1i_A_B<=_A_B+_A_A_C_FOR_R_C_L
_L1_C_F1_L2int_T2_F2_D2_L2cha
_T2_D1i_D2_L2int_T2_D2_L2int_
2_D2_L2int_T2_D2_D1s_E_F3_D1s
E_F3_E_F3_A_D1i_A_D1i_B<_D1i_
>_D1i_B%_A_L1_D1c_B<=_D1c_B>=
B&&_B+_A_D1c_B<_D1i_A_L1_C_L1
C_FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
