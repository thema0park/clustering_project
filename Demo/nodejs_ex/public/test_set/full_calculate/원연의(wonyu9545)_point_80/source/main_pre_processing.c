//원연의(wonyu9545)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i=0,a[10]={0},j=0;
	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    for(j=0;j<8;j++){
        if(!(byte[0][i]=='1'||byte[0][i]=='0')){printf("\"Input Error\"");return 0;}
        if(!(byte[1][i]=='1'||byte[1][i]=='0')){printf("\"Input Error\"");return 0;}
    }
    for(i=7;i>=0;i--){
        if(byte[0][i]=='1'&&byte[1][i]=='1'&&a[i]==1){out[i]='1';a[i-1]=1;}
        else if(byte[0][i]=='1'&&byte[1][i]=='1'&&a[i]==0){out[i]='0';a[i-1]=1;}
        else if(byte[0][i]=='1'&&byte[1][i]=='0'&&a[i]==1){out[i]='0';a[i-1]=1;}
        else if(byte[0][i]=='0'&&byte[1][i]=='1'&&a[i]==1){out[i]='0';a[i-1]=1;}
        else if(byte[0][i]=='0'&&byte[1][i]=='0'&&a[i]==1){out[i]='1';}
        else if(byte[0][i]=='0'&&byte[1][i]=='1'&&a[i]==0){out[i]='1';}
        else if(byte[0][i]=='1'&&byte[1][i]=='0'&&a[i]==0){out[i]='1';}
        else if(byte[0][i]=='0'&&byte[1][i]=='0'&&a[i]==0){out[i]='0';}
    }


	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D1i_D2_L2int_T
_D1i_D1i_D2_L2int_T2_D1i_D2_D
s_D1i_D1i_E_F3_D1i_A_D1i_B<_D
i_D1c_B==_D1i_D1c_B==_B||_D1s
E_F3_D1i_R_C_L1_D1i_D1c_B==_D
i_D1c_B==_B||_D1s_E_F3_D1i_R_
_L1_C_FOR_D1i_A_D1i_B>=_D1i_D
c_B==_D1i_D1c_B==_B&&_D1i_B==
B&&_D1c_A_D1i_B-_D1i_A_C_D1i_
1c_B==_D1i_D1c_B==_B&&_D1i_B=
_B&&_D1c_A_D1i_B-_D1i_A_C_D1i
D1c_B==_D1i_D1c_B==_B&&_D1i_B
=_B&&_D1c_A_D1i_B-_D1i_A_C_D1
_D1c_B==_D1i_D1c_B==_B&&_D1i_
==_B&&_D1c_A_D1i_B-_D1i_A_C_D
i_D1c_B==_D1i_D1c_B==_B&&_D1i
B==_B&&_D1c_A_C_D1i_D1c_B==_D
i_D1c_B==_B&&_D1i_B==_B&&_D1c
A_C_D1i_D1c_B==_D1i_D1c_B==_B
&_D1i_B==_B&&_D1c_A_C_D1i_D1c
B==_D1i_D1c_B==_B&&_D1i_B==_B
&_D1c_A_C_L1_L1_L1_L1_L1_L1_L
_L1_C_FOR_D1s_E_F3_D1i_R_C_F1
1_
###############################*/
//$//
