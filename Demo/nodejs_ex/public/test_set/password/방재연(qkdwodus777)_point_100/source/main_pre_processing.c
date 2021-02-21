//방재연(qkdwodus777)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int x = 0;
    int y = 1;
    int i ;
    int fibo = 0;
    for(i = 0; i < fibo_n; i++ ) {
        if(i == 0) fibo = 0;
        else {
            fibo = x + y;
            x = y;
            y = fibo;
        }
    }
    if(fibo_n < 3) fibo = 1;

    while(fibo > 'Z' - 'A' + 1) {
        fibo = fibo - ('Z' - 'A' + 1);
    }
   

    for(i = 0 ; i < TEXT_MAX ; i++) {
        if('A' <=text[i] && text[i] <= 'Z') {
            text[i] = text[i] + fibo;
           if ('Z' < text[i])
     
               text[i] = text[i] - ('Z' - 'A' + 1);
            
        }
    }
    


	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_D1s_E_F3_D1s_E_F
_L2int_T2_D1i_D2_L2int_T2_D1i
D2_L2int_T2_D2_L2int_T2_D1i_D
_D1i_A_B<_D1i_B==_D1i_A_B+_A_
_A_C_L1_C_FOR_D1i_B<_D1i_A_L1
D1c_D1c_B-_D1i_B+_B>_D1c_D1c_
-_D1i_B+_B-_A_C_W_D1i_A_D1i_B
_D1c_B<=_D1c_B<=_B&&_B+_A_D1c
B<_D1c_D1c_B-_D1i_B+_B-_A_L1_
_L1_C_FOR_D1s_E_F3_D1i_R_C_F1
1_
###############################*/
//$//
