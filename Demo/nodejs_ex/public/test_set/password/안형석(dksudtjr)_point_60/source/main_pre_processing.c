//안형석(dksudtjr)_point_60
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int fibo(int n)
{
    if (n==0) return 1;
    else if (n==1) return 1;
    else return fibo(n-1)+fibo(n-2);
}

int main()
{
    
	int fibo_n;
	char text[TEXT_MAX];
    int tmp=0;
    int i=0;

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    fibo_n= fibo_n - 1;
    tmp=fibo(fibo_n);
    //printf("%d",tmp);
    
    for(i;text[i]!='\0';i++)
    {
        if ('A'<= text[i]+tmp && text[i]+tmp <='Z')
        {
            text[i]= text[i]+tmp;
        }
        
        else 
        {
            //text[i]='A'+(((text[i]+tmp)%'Z')%26)-1;
            //text[i]='A'+(tmp%27)-2;
            text[i]='A'+((text[i]+tmp)%'A')%26;
            //text[i]='A'+(text[i]+tmp)%26;
            //tmp=tmp%26;
            //text[i]='A'+(text[i]+tmp)%'A';

        }
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;

    /* // 65 ~ 90
    char a;
    a='Z';
    printf("\n%d\n",a);
    */

}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_R_D1i_B==_D1i_R_D1
_B-_E_F3_D1i_B-_E_F3_B+_R_L1_
1_C_F1_L2int_T2_F2_D2_L2int_T
_D2_L2char_T2_D1i_D2_L2int_T2
D1i_D2_L2int_T2_D1i_D2_D1s_E_
3_D1s_E_F3_D1i_B-_A_E_F3_A_D1
_B!=_D1c_B+_B<=_B+_D1c_B<=_B&
_B+_A_C_D1c_B+_D1c_B%_D1i_B%_
+_A_C_L1_C_FOR_D1s_E_F3_D1i_R
C_F1_1_
###############################*/
//$//
