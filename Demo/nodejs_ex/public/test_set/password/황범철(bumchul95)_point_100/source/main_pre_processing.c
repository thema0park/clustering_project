//황범철(bumchul95)_point_100
#define _CRT_SECURE_NO_WARNINGS
  #define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int f1 = 1, f2 = 1;
    int f3;
    int ff[100];
    int i;
    for(i = 0; i < fibo_n - 2; i++){
        f3 = f1 + f2;
        f2 = f1;
        f1 = f3;
        //f3이 ㅠㅣ보나치 숫자
        //printf("%d\n\n",f3);
    }
    if((fibo_n == 1)||(fibo_n == 2))
        f3 = 1;
    for(; f3 > 26; ){
        f3 -= 26;
    }
    //printf("fibo %d\n", f3);
    //printf("%c\n", text[0] + 3);
    //printf("fibo %d\n", f3);
    //printf("A %d Z %d\n\n", 'A', 'Z');//65 90
    //abcde fghij klmno pqrst uvwxy z
    //text[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";]
    //printf("fff%d  \n",f3);
    int k;
    for(k = 0; text[k]!= NULL; k++);
    for(i = 0; i < k; i++){        
        text[i] = text[i] + f3;
        for(;text[i] > 90;)
            text[i] -= 26;
        for(;text[i] < 65;)
            text[i] += 26;
    }
    
	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_D1s_E_F3_D1s_E_F
_L2int_T2_D1i_D2_L2int_T2_D1i
D2_L2int_T2_D2_L2int_T2_D1i_D
_L2int_T2_D2_D1i_A_D1i_B-_B<_
+_A_A_A_C_FOR_D1i_B==_D1i_B==
B||_D1i_A_L1_D1i_B>_D1i_A_C_F
R_L2int_T2_D2_D1i_A_B!=_FOR_D
i_A_B<_B+_A_D1i_B>_D1i_A_FOR_
1i_B<_D1i_A_FOR_C_FOR_D1s_E_F
_D1i_R_C_F1_1_
###############################*/
//$//
