//서윤의(yoony0612)_point_30
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int main()
{
    
    int k1 = 1;
    int k2 = 1;

	int n;
	char a[TEXT_MAX];

	scanf("%d", &n);
	scanf("%s", a);

    int i = 0;
    for(i = 0;i<n-2;i++){
        k2 = k2 + k1;
        k1 = k2 - k1;
    }
    
    int j =0;
    for(j = 0;j<strlen(a);j++){
        a[j] = a[j] + k2;
        if(a[j] > 90){
            a[j] = a[j] - 'Z';
            a[j] = 'A' + (a[j]-1);
        }

    }


	printf("%s\n", a);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D1i_D2
L2int_T2_D1i_D2_L2int_T2_D2_L
char_T2_D1i_D2_D1s_E_F3_D1s_E
F3_L2int_T2_D1i_D2_D1i_A_D1i_
-_B<_B+_A_B-_A_C_FOR_L2int_T2
D1i_D2_D1i_A_E_F3_B<_B+_A_D1i
B>_D1c_B-_A_D1c_D1i_B-_B+_A_C
L1_C_FOR_D1s_E_F3_D1i_R_C_F1_
_
###############################*/
//$//
