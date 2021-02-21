//이나정(leena9901)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    int mm[6][6]={{2,3,4,4,3},{1,2,3,3,2},{2,3,3,2,1},{1,2,3,3,2},{2,3,3,2,1}};
    int ww[6][6]={{3,4,4,3,2},{2,3,3,2,1},{1,2,3,3,2},{2,3,3,2,1},{1,2,3,3,2}};
    
    if (gender=='M'){
        out=mm[5-f][l-1];
    }
    else{
        out=ww[5-f][l-1];
    }
	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_L2int_T2_D1i_D1i_
1i_D1i_D1i_D1i_D1i_D1i_D1i_D1
_D1i_D1i_D1i_D1i_D1i_D1i_D1i_
1i_D1i_D1i_D1i_D1i_D1i_D1i_D1
_D1i_D1i_D2_L2int_T2_D1i_D1i_
1i_D1i_D1i_D1i_D1i_D1i_D1i_D1
_D1i_D1i_D1i_D1i_D1i_D1i_D1i_
1i_D1i_D1i_D1i_D1i_D1i_D1i_D1
_D1i_D1i_D2_D1c_B==_D1i_B-_D1
_B-_A_C_D1i_B-_D1i_B-_A_C_L1_
1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
