//김수아(sua99831)_point_10
#define _CRT_SECURE_NO_WARNINGS
   
#define TEXT_MAX 100

int fibo(int n){
    if (n==1) {return 1;}
    else if (n==2) {return 1;}
    else {return (fibo(n-1) + fibo(n-2));}
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int add = 0;

	scanf("%d", &fibo_n);
	scanf("%s", text);
    add = fibo(fibo_n);

    int i=0;
    while(text[i]!='\0'){
        if(text[i]-'0'+ add > 42) text[i] = text[i]-'0'-28;
        text[i] = (text[i] - '0' + add) + '0';
        //if((text[i] - '0' + add) > 42) {
        //   text[i] = (text[i] -'0'- 28) + '0';}
        i++;
    }

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_R_C_D1i_B==_D1i_R_
_D1i_B-_E_F3_D1i_B-_E_F3_B+_R
C_L1_L1_C_F1_L2int_T2_F2_D2_L
int_T2_D2_L2char_T2_D1i_D2_L2
nt_T2_D1i_D2_D1s_E_F3_D1s_E_F
_E_F3_A_L2int_T2_D1i_D2_D1c_B
=_D1c_B-_B+_D1i_B>_D1c_B-_D1i
B-_A_L1_D1c_B-_B+_D1c_B+_A_C_
_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
